#include "E01Example_10.h"
#include "CWidget_E10.h"

namespace E01Example
{
	int E01Example_10(int argc, char* args[])
	{
		CWidget_E10 oWidgetA(10, 3.14f);
		CWidget_E10 oWidgetB(std::move(oWidgetA));

		std::cout << "=====> 위젯 - A (복사 생성자) <=====\n";
		oWidgetA.ShowInfo();

		std::cout << "\n=====> 위젯 - B (복사 생성자) <=====\n";
		oWidgetB.ShowInfo();

		oWidgetA.SetVal_Int(20);
		oWidgetB = oWidgetA;

		std::cout << "\n=====> 위젯 - A (복사 할당 연산자) <=====\n";
		oWidgetA.ShowInfo();

		std::cout << "\n=====> 위젯 - B (복사 할당 연산자) <=====\n";
		oWidgetB.ShowInfo();

		return 0;
	}
}
