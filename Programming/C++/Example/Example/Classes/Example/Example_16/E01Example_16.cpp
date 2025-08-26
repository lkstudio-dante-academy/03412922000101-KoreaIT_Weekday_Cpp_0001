#include "E01Example_16.h"
#include "CWidget_E16.h"

namespace E01Example
{
	/** 위젯을 출력한다 */
	static std::ostream& operator<<(std::ostream& a_rOut, const CWidget_E16& a_rWidget);

	int E01Example_16(int argc, char* args[])
	{
		CWidget_E16 oWidgetA(10, 3.14f);
		CWidget_E16 oWidgetB(20, 3.14f);

		std::cout << "=====> 결과 <=====\n";
		std::cout << "위젯 A + 위젯 B = " << (oWidgetA + oWidgetB) << std::endl;
		std::cout << "위젯 A - 위젯 B = " << (oWidgetA - oWidgetB) << std::endl;
		std::cout << "위젯 A * 위젯 B = " << (oWidgetA * oWidgetB) << std::endl;
		std::cout << "위젯 A / 위젯 B = " << (oWidgetA / oWidgetB) << std::endl;

		return 0;
	}

	std::ostream& operator<<(std::ostream& a_rOut, const CWidget_E16& a_rWidget)
	{
		a_rOut << a_rWidget.GetVal_Int() << ", " << a_rWidget.GetVal_Real();
		return a_rOut;
	}
}
