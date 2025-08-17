#include "CDerived_E14.h"

namespace E01Example
{
	CDerived_E14::CDerived_E14(int a_nVal, float a_fVal, const std::string& a_rStr)
		:
		CBase_E14(a_nVal, a_fVal),
		m_oStr(a_rStr)
	{
		// Do Something
	}

	void CDerived_E14::ShowInfo(void)
	{
		std::cout << "정수 : " << this->GetVal_Int() << std::endl;
		std::cout << "실수 : " << this->GetVal_Real() << std::endl;
		std::cout << "문자열 : " << m_oStr << std::endl;
	}
}
