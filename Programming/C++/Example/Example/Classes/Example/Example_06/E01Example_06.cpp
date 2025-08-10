#include "E01Example_06.h"

namespace E01Example
{
	int E01Example_06(int argc, char* args[])
	{
		std::shared_ptr<int> oVal_PtrA(new int(0));
		std::shared_ptr<int> oVal_PtrB = oVal_PtrA;

		*oVal_PtrA = 10;
		*oVal_PtrB = 20;

		int nValA = (oVal_PtrA.get() != nullptr) ? *oVal_PtrA : 0;
		int nValB = (oVal_PtrB.get() != nullptr) ? *oVal_PtrB : 0;

		/*
		* 아래와 같이 use_count 함수를 활용하면 스마트 포인터가 참조하고 있는 대상의
		* 레퍼런스 카운팅을 가져오는 것이 가능하다. (+ 즉, 동일한 대상을 참조하고 있는
		* 스마트 포인터의 개수를 알 수 있다.)
		*/
		int nCount_RefA = oVal_PtrA.use_count();
		int nCount_RefB = oVal_PtrB.use_count();

		std::cout << "=====> shared_ptr 결과 - A <=====\n";
		std::cout << "포인터 A (" << oVal_PtrA.get() << ") : " << nValA << ", " << nCount_RefA << std::endl;
		std::cout << "포인터 B (" << oVal_PtrB.get() << ") : " << nValB << ", " << nCount_RefB << std::endl;

		/*
		* 아래와 같이 reset 함수를 활용하면 포인터가 참조하는 원시 포인터를 변경하는 것이 가능하다.
		*/
		oVal_PtrA.reset();

		nValA = (oVal_PtrA.get() != nullptr) ? *oVal_PtrA : 0;
		nValB = (oVal_PtrB.get() != nullptr) ? *oVal_PtrB : 0;

		nCount_RefA = oVal_PtrA.use_count();
		nCount_RefB = oVal_PtrB.use_count();

		std::cout << "\n=====> shared_ptr 결과 - B <=====\n";
		std::cout << "포인터 A (" << oVal_PtrA.get() << ") : " << nValA << ", " << nCount_RefA << std::endl;
		std::cout << "포인터 B (" << oVal_PtrB.get() << ") : " << nValB << ", " << nCount_RefB << std::endl;

		return 0;
	}
}
