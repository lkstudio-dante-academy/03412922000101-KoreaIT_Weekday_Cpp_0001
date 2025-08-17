#include "CBase_E14.h"

namespace E01Example
{
	CBase_E14::CBase_E14(int a_nVal, float a_fVal)
		:
		m_nVal(a_nVal),
		m_fVal(a_fVal)
	{
		// Do Something
	}

	int CBase_E14::GetVal_Int(void) const
	{
		return m_nVal;
	}

	float CBase_E14::GetVal_Real(void) const
	{
		return m_fVal;
	}
}
