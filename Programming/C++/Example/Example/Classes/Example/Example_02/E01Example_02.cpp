#include "E01Example_02.h"

namespace E01Example
{
	/** 값을 교환한다 */
	void SwapVal_E02(int& a_rnValA, int& a_rnValB);

	int E01Example_02(int argc, char* args[])
	{
		int nValA = 0;
		int nValB = 0;

		std::cout << "정수 (2 개) 입력 : ";
		std::cin >> nValA >> nValB;

		std::cout << "\n=====> 교환 전 <=====\n";
		std::cout << nValA << ", " << nValB << std::endl;

		SwapVal_E02(nValA, nValB);

		std::cout << "\n=====> 교환 후 <=====\n";
		std::cout << nValA << ", " << nValB << std::endl;

		return 0;
	}

	void SwapVal_E02(int& a_rnValA, int& a_rnValB)
	{
		int nTemp = a_rnValA;
		a_rnValA = a_rnValB;
		a_rnValB = nTemp;
	}
}
