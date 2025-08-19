#include "E01Example_15.h"
#include "CBase_E15.h"
#include "CDerived_E15.h"

namespace E01Example
{
	int E01Example_15(int argc, char* args[])
	{
		CBase_E15* pBaseA = new CBase_E15(10, 3.14f);
		CBase_E15* pBaseB = new CDerived_E15(20, 3.14f, "Hello, World!");

		/*
		* 아래와 같이 static_cast 연산자는 안전한 다운 캐스팅을 지원하지 않기 때문에
		* 잘못된 형변환이 발생 할 수 있다.
		*/
		std::cout << "=====> static_cast 결과 <=====\n";
		std::cout << "Base A -> Derived : " << static_cast<CDerived_E15*>(pBaseA) << std::endl;
		std::cout << "Base B -> Derived : " << static_cast<CDerived_E15*>(pBaseB) << std::endl;

		/*
		* 아래와 같이 dynamic_cast 연산자는 안전한 다운 캐스팅을 지원하기 때문에
		* 형변환에 실패 할 경우 NULL 포인터가 반환 되는 것을 알 수 있다.
		* 
		* 단, dynamic_cast 연산자는 내부적으로 RTTI (Runtime Type Information) 를 활용해서
		* 캐스팅 가능 여부를 판단하기 때문에 가상 함수가 반드시 1 개 이상 구현 되어있어야한다.
		* (+ 즉, RTTI 는 가상 함수 테이블을 기반으로 생성 된다는 것을 알 수 있다.)
		*/
		std::cout << "\n=====> dynamic_cast 결과 <=====\n";
		std::cout << "Base A -> Derived : " << dynamic_cast<CDerived_E15*>(pBaseA) << std::endl;
		std::cout << "Base B -> Derived : " << dynamic_cast<CDerived_E15*>(pBaseB) << std::endl;

		SAFE_DELETE(pBaseA);
		SAFE_DELETE(pBaseB);

		return 0;
	}
}
