#include "E01Example_17.h"
#include "Func+Example_17.h"

namespace E01Example
{
	int E01Example_17(int argc, char* args[])
	{
		int nValA = 10;
		int nValB = 20;

		std::string oStrA = "ABC";
		std::string oStrB = "DEF";

		std::cout << "=====> 교환 전 <=====\n";
		std::cout << nValA << ", " << nValB << std::endl;
		std::cout << oStrA << ", " << oStrB << std::endl;

		SwapVal_E17(nValA, nValB);
		SwapVal_E17<std::string>(oStrA, oStrB);

		std::cout << "\n=====> 교환 후 <=====\n";
		std::cout << nValA << ", " << nValB << std::endl;
		std::cout << oStrA << ", " << oStrB << std::endl;

		return 0;
	}
}
