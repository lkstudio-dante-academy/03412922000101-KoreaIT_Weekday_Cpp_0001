#include "E01Example_03.h"

namespace E01Example
{
	/** 값을 설정한다 */
	void SetupValues_E03(int a_pnValues[], int a_nSize);

	/** 값을 출력한다 */
	void PrintValues_E03(int a_pnValues[], int a_nSize);

	int E01Example_03(int argc, char* args[])
	{
		int* pnVal = new int(0);
		float* pfVal = new float(0.0f);

		*pnVal = 10;
		*pfVal = 3.14f;

		std::cout << "=====> 동적 할당 결과 - A <=====\n";
		std::cout << "정수 (" << pnVal << ") : " << *pnVal << std::endl;
		std::cout << "실수 (" << pfVal << ") : " << *pfVal << std::endl;

		const int nSize = 5;
		int* pnValues = new int[nSize];

		SetupValues_E03(pnValues, nSize);

		std::cout << "\n=====> 동적 할당 결과 - B <=====\n";
		PrintValues_E03(pnValues, nSize);

		delete pnVal;
		delete pfVal;

		delete[] pnValues;
		return 0;
	}

	void SetupValues_E03(int a_pnValues[], int a_nSize)
	{
		for(int i = 0; i < a_nSize; ++i)
		{
			a_pnValues[i] = rand() % 99 + 1;
		}
	}

	void PrintValues_E03(int a_pnValues[], int a_nSize)
	{
		for(int i = 0; i < a_nSize; ++i)
		{
			std::cout << a_pnValues[i] << ", ";
		}

		std::cout << std::endl;
	}
}
