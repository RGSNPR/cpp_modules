#include <iostream>
#include <fstream>

int main(int argc, char **argv) {


	if (argc != 4) {
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}

	std::string fFile(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string strOfFile;
	std::string lineOfFile;
	std::fstream fs;

	fs.open(fFile, std::fstream::in | std::fstream::out);
	if (fs.is_open() == false) {
		std::cout << "Error: invalid file" << std::endl;
		return (1);
	}
	while (getline(fs, lineOfFile)) {
		strOfFile.append(lineOfFile);
		if (fs.eof()) break;
		strOfFile.append("\n");
	}
	std::string::size_type n = 0;
	while ((n = strOfFile.find(s1, n)) != std::string::npos)
	{
		strOfFile.erase(n, s1.size());
		strOfFile.insert(n, s2, 0, s2.size());
		n += s2.size();
	}
	fs.close();
	std::ofstream toReplace(fFile + ".replace");
	if (toReplace.is_open() == false) {
		std::cout << "Error: invalid file" << std::endl;
		return (1);
	}
	toReplace << strOfFile;
	toReplace.close();
	return (0);
}
