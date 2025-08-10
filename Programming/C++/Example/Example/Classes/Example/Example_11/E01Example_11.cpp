#include "E01Example_11.h"

#include "CWidget_E11.h"
#include "CSingleton_E11.h"

namespace E01Example
{
	int E01Example_11(int argc, char* args[])
	{
		CWidget_E11 oWidgetA;
		CWidget_E11 oWidgetB;

		oWidgetA.IncrVal(10);
		oWidgetB.IncrVal(10);

		std::cout << "=====> 위젯 - A <=====\n";
		oWidgetA.ShowInfo();

		std::cout << "\n=====> 위젯 - B <=====\n";
		oWidgetB.ShowInfo();

		auto pSingletonA = CSingleton_E11::GetInst();
		auto pSingletonB = CSingleton_E11::GetInst();

		pSingletonA->SetVal(10);
		pSingletonB->SetVal(20);

		std::cout << "\n=====> 싱글턴 <=====\n";
		std::cout << "싱글턴 A (" << pSingletonA << ") : " << pSingletonA->GetVal() << std::endl;
		std::cout << "싱글턴 B (" << pSingletonB << ") : " << pSingletonB->GetVal() << std::endl;

		return 0;
	}
}
