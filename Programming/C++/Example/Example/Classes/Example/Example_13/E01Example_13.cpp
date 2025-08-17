#include "E01Example_13.h"
#include "CBase_E13.h"
#include "CDerived_E13.h"

namespace E01Example
{
	int E01Example_13(int argc, char* args[])
	{
		CBase_E13* pBaseA = new CBase_E13(10, 3.14f);
		CBase_E13* pBaseB = new CBase_E13(20, 3.14f);

		CBase_E13* pDerivedA = new CDerived_E13(30, 3.14f, "Hello, World!");
		CDerived_E13* pDerivedB = new CDerived_E13(40, 3.14f, "Hello, World!");
		CDerived_E13* pDerivedC = new CDerived_E13(50, 3.14f, "Hello, World!");

		std::cout << "=====> 부모 클래스 - A <=====\n";
		pBaseA->ShowInfo();

		std::cout << "\n=====> 부모 클래스 - B <=====\n";
		pBaseA->ShowInfo_Virtual();

		/*
		* 아래와 같이 부모 클래스 포인터로 자식 클래스를 통해 생성 된 객체를 참조 할 경우
		* 해당 객체를 자식 클래스 객체가 아닌 부모 클래스 객체로 인지하기 때문에 동일한 이름의
		* 멤버에 접근 할 경우 부모 클래스에 정의 된 멤버에 접근한다는 것을 알 수 있다. (+ 즉,
		* 해당 객체를 참조하는 포인터 형에 따라 접근하는 멤버가 달라질 수 있다는 것을 의미한다.)
		*/
		std::cout << "\n=====> 자식 클래스 - A <=====\n";
		pDerivedA->ShowInfo();

		std::cout << "\n=====> 자식 클래스 - B <=====\n";
		pDerivedB->ShowInfo();

		std::cout << "\n=====> 자식 클래스 - C <=====\n";
		pDerivedB->ShowInfo_Virtual();

		std::cout << std::endl;

		SAFE_DELETE(pBaseA);
		SAFE_DELETE(pBaseB);

		SAFE_DELETE(pDerivedA);
		SAFE_DELETE(pDerivedB);
		SAFE_DELETE(pDerivedC);

		return 0;
	}
}
