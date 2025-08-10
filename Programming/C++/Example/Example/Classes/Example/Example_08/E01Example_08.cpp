#include "E01Example_08.h"
#include "CWidget_E08.h"

namespace E01Example
{
	int E01Example_08(int argc, char* args[])
	{
		CWidget_E08 oWidgetA;
		oWidgetA.m_nVal = 10;
		oWidgetA.m_fVal = 3.14f;

		CWidget_E08 oWidgetB;
		oWidgetB.m_nVal = 20;
		oWidgetB.m_fVal = 3.14f;

		std::cout << "=====> 위젯 - A <=====\n";
		oWidgetA.ShowInfo();

		std::cout << "\n=====> 위젯 - B <=====\n";
		oWidgetB.ShowInfo();

		return 0;
	}
}
