#include "E01Example_05.h"

namespace E01Example
{
	int E01Example_05(int argc, char* args[])
	{
		std::auto_ptr<int> oVal_AutoPtrA(new int(0));
		std::auto_ptr<int> oVal_AutoPtrB;

		*oVal_AutoPtrA = 10;

		/*
		* 아래와 같이 get 함수를 활용하면 스마트 포인터가 지니고 있는 원시 포인터를 가져오는 것이
		* 가능하다. (+ 즉, 스마트 포인터가 참조하고 있는 메모리 주소를 가져 온다는 것을 의미한다.)
		* 
		* nullptr 키워드란?
		* - 널 (NULL) 포인터를 의미하는 키워드를 의미한다. (+ 즉, C++ 이 C 에서 사용한
		* NULL 상수 대신에 nullptr 키워드를 통해 널 포인터를 나타낸다는 것을 알 수 있다.)
		*/
		int nValA = (oVal_AutoPtrA.get() != nullptr) ? *oVal_AutoPtrA : 0;
		int nValB = (oVal_AutoPtrB.get() != nullptr) ? *oVal_AutoPtrB : 0;

		std::cout << "=====> auto_ptr 결과 - A <=====\n";
		std::cout << "포인터 A (" << oVal_AutoPtrA.get() << ") : " << nValA << std::endl;
		std::cout << "포인터 B (" << oVal_AutoPtrB.get() << ") : " << nValB << std::endl;

		/*
		* 아래와 같이 auto_ptr 은 = (할당 연산자) 를 통해 소유권을 이전하는 것이 가능하다. (+ 즉,
		* 할당 연산자를 통해 소유권을 이전하고 나면 우항의 스마트 포인터는 널 포인터가 된다는 것을
		* 알 수 있다.)
		*/
		oVal_AutoPtrB = oVal_AutoPtrA;
		*oVal_AutoPtrB = 20;

		nValA = (oVal_AutoPtrA.get() != nullptr) ? *oVal_AutoPtrA : 0;
		nValB = (oVal_AutoPtrB.get() != nullptr) ? *oVal_AutoPtrB : 0;

		std::cout << "\n=====> auto_ptr 결과 - B <=====\n";
		std::cout << "포인터 A (" << oVal_AutoPtrA.get() << ") : " << nValA << std::endl;
		std::cout << "포인터 B (" << oVal_AutoPtrB.get() << ") : " << nValB << std::endl;

		std::unique_ptr<int> oVal_UniquePtrA(new int(0));
		std::unique_ptr<int> oVal_UniquePtrB;

		*oVal_UniquePtrA = 10;

		std::cout << "\n=====> unique_ptr 결과 - A <=====\n";
		std::cout << "포인터 A (" << oVal_UniquePtrA.get() << ") : " << nValA << std::endl;
		std::cout << "포인터 B (" << oVal_UniquePtrB.get() << ") : " << nValB << std::endl;

		/*
		* 아래와 같이 unique_ptr 은 move 함수를 통해 소유권을 이전하는 것이 가능하다. (+ 즉,
		* unique_ptr 은 할당 연산자를 지원하지 않는다는 것을 알 수 있다.)
		* 
		* Ex)
		* std::unique_ptr<int> oPtrA(new int(0));
		* std::unique_ptr<int> oPtrB;
		* 
		* oPtrB = oPtrA;			<- 컴파일 에러
		* 
		* 위와 같이 unique_ptr 에 = (할당 연산자) 를 사용 할 경우 컴파일 에러가 발생한다는 것을
		* 알 수 있다.
		*/
		oVal_UniquePtrB = std::move(oVal_UniquePtrA);
		*oVal_UniquePtrB = 20;

		std::cout << "\n=====> unique_ptr 결과 - B <=====\n";
		std::cout << "포인터 A (" << oVal_UniquePtrA.get() << ") : " << nValA << std::endl;
		std::cout << "포인터 B (" << oVal_UniquePtrB.get() << ") : " << nValB << std::endl;

		return 0;
	}
}
