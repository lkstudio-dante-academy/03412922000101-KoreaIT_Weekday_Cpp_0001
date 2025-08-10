#include "E01Example_09.h"
#include "CWidget_E09.h"

namespace E01Example
{
	int E01Example_09(int argc, char* args[])
	{
		CWidget_E09 oWidgetA;
		oWidgetA.SetVal_Int(10);
		oWidgetA.SetVal_Real(3.14f);

		/*
		* 아래와 같이 new 키워드를 활용하면 객체를 힙 영역에 생성하는 것이 가능하며
		* C++ 은 new 키워드를 통해서만 객체를 힙 영역에 생성하는 것이 가능하다. (+ 즉,
		* malloc 과 같은 동적 할당 함수는 객체를 힙 영역에 생성하는 것이 불가능하다는 것을
		* 의미한다.)
		* 
		* 이는 객체가 생성 되기 위해서는 반드시 생성자가 호출 되어야하는데 동적 할당 함수는
		* 생성자를 호출하지 않기 때문이다. (+ 즉, new 키워드는 객체를 힙 영역에 생성 후
		* 생성자가 호출 된다는 것을 알 수 있다.)
		* 
		* 따라서 객체를 제외한 다른 자료형의 데이터는 동적 할당 함수나 new 키워드 중에
		* 선호하는 방법을 선택하면 된다. (+ 즉, 객체 생성 가능 여부를 제외하면 동적 할당 함수와
		* new 키워드는 동일하다는 것을 알 수 있다.)
		*/
		CWidget_E09* pWidgetB = new CWidget_E09(20, 3.14f);

		std::cout << "=====> 위젯 - A <=====\n";
		oWidgetA.ShowInfo();

		std::cout << "\n=====> 위젯 - B <=====\n";
		pWidgetB->ShowInfo();

		std::cout << std::endl;
		delete pWidgetB;

		return 0;
	}
}
