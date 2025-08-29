#include "E01Example_18.h"
#include "CArray_E18.h"

namespace E01Example
{
	/** operator << */
	template<typename T>
	std::ostream& operator<<(std::ostream& a_rOut, const CArray_E18<T>& a_rValues);

	int E01Example_18(int argc, char* args[])
	{
		CArray_E18<int> oValuesA;
		CArray_E18<std::string> oValuesB;

		for(int i = 0; i < 10; ++i)
		{
			int nVal = rand() % 99 + 1;

			oValuesA.AddVal(nVal);
			oValuesB.AddVal(std::to_string(nVal));
		}

		std::cout << "=====> 배열 <=====\n";
		std::cout << oValuesA << std::endl;
		std::cout << oValuesB << std::endl;

		int nVal_Replace = 0;

		std::cout << "\n정수 입력 (치환) : ";
		std::cin >> nVal_Replace;

		oValuesA[0] = nVal_Replace;
		oValuesB[0] = std::to_string(nVal_Replace);

		std::cout << "\n=====> 배열 - 치환 후 <=====\n";
		std::cout << oValuesA << std::endl;
		std::cout << oValuesB << std::endl;

		return 0;
	}

	template<typename T>
	std::ostream& operator<<(std::ostream& a_rOut, const CArray_E18<T>& a_rValues)
	{
		for(int i = 0; i < a_rValues.GetNumValues(); ++i)
		{
			std::cout << a_rValues[i] << ", ";
		}

		return a_rOut;
	}
}
