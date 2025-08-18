#include "CDerived_E15.h"

namespace E01Example
{
	CDerived_E15::CDerived_E15(int a_nVal, float a_fVal, const std::string& a_rStr)
		:
		CBase_E15(a_nVal, a_fVal),
		m_oStr(a_rStr)
	{ 
		// Do Something
	}

	void CDerived_E15::ShowInfo(void)
	{ 
		CBase_E15::ShowInfo();
		std::cout << "문자열 : " << m_oStr << std::endl;
	}
}
