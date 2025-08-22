#include "T01Training_02.h"
#include "CArray_T02.h"

namespace T01Training
{
	/** 값을 출력한다 */
	static void PrintValues_T02(const CArray_T02& a_rValues);

	int T01Training_02(int argc, char* args[])
	{
		CArray_T02 oValues;

		for(int i = 0; i < 10; ++i)
		{
			oValues.AddVal(rand() % 99 + 1);
		}

		std::cout << "=====> 배열 <=====\n";
		PrintValues_T02(oValues);

		return 0;
	}

	void PrintValues_T02(const CArray_T02& a_rValues)
	{
		for(int i = 0; i < a_rValues.GetNumValues(); ++i)
		{
			std::cout << a_rValues.GetVal(i) << ", ";
		}

		std::cout << std::endl;
	}
}
