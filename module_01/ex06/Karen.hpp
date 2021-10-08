#include <string>
#include <iostream>

class Karen {

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void invalid(void);
		void (Karen::*funcPtrs[4])(void);

	public:
		void complain(std::string level);
		Karen();
		~Karen();
};