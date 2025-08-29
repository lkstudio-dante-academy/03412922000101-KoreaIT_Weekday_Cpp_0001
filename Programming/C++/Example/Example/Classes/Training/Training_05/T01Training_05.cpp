#include "T01Training_05.h"
#include "CList_Linked_T05.h"

namespace T01Training
{
	/** operator << */
	std::ostream& operator<<(std::ostream& a_rOut, const CList_Linked_T05& a_rListValues);

	int T01Training_05(int argc, char* args[])
	{
		CList_Linked_T05 oListValues;

		for(int i = 0; i < 10; ++i)
		{
			oListValues.AddVal(rand() % 99 + 1);
		}

		std::cout << "=====> 리스트 <=====\n";
		std::cout << oListValues << std::endl;

		int nVal_Remove = 0;

		std::cout << "\n정수 입력 (제거) : ";
		std::cin >> nVal_Remove;

		oListValues.RemoveVal(nVal_Remove);

		std::cout << "\n=====> 리스트 - 제거 후 <=====\n";
		std::cout << oListValues << std::endl;

		oListValues[0] = 100;

		std::cout << "\n=====> 리스트 - 변경 후 <=====\n";
		std::cout << oListValues << std::endl;

		return 0;
	}

	std::ostream& operator<<(std::ostream& a_rOut, const CList_Linked_T05& a_rListValues)
	{
		for(int i = 0; i < a_rListValues.GetNumValues(); ++i)
		{
			a_rOut << a_rListValues[i] << ", ";
		}

		return a_rOut;
	}
}
