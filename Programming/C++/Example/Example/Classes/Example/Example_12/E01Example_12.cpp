#include "E01Example_12.h"
#include "CBase_E12.h"
#include "CDerived_E12.h"

namespace E01Example
{
	int E01Example_12(int argc, char* args[])
	{
		CBase_E12 oBase(10, 3.14f);

		CDerived_E12 oDerivedA(20, 3.14f, "Hello, World!");
		CDerived_E12 oDerivedB(30, 3.14f, "Hello, World!");

		std::cout << "=====> 부모 클래스 <=====\n";
		oBase.ShowInfo_Parent();

		std::cout << "\n=====> 자식 클래스 - A <=====\n";
		oDerivedA.ShowInfo_Child();

		std::cout << "\n=====> 자식 클래스 - B <=====\n";
		oDerivedB.ShowInfo_Child();

		std::cout << std::endl;
		return 0;
	}
}
