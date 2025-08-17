#include "E01Example_14.h"
#include "CBase_E14.h"
#include "CDerived_E14.h"

namespace E01Example
{
	int E01Example_14(int argc, char* args[])
	{
		/*
		* 아래와 같이 추상 클래스는 직접 객체화 시키는 것이 불가능하다. (+ 즉, 컴파일 에러가
		* 발생한다는 것을 알 수 있다.)
		*/
		//CBase_E14 oBase(10, 3.14f);

		CDerived_E14 oDerived(10, 3.14f, "Hello, World!");

		std::cout << "=====> 자식 클래스 <=====\n";
		oDerived.ShowInfo();

		return 0;
	}
}
