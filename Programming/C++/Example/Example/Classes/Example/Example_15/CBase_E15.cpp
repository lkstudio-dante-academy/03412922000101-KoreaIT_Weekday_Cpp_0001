#include "CBase_E15.h"

namespace E01Example
{
	CBase_E15::CBase_E15(int a_nVal, float a_fVal)
		:
		m_nVal(a_nVal),
		m_fVal(a_fVal)
	{
		// Do Something
	}

	void CBase_E15::ShowInfo(void)
	{
		std::cout << "정수 : " << m_nVal << std::endl;
		std::cout << "실수 : " << m_fVal << std::endl;
	}
}
