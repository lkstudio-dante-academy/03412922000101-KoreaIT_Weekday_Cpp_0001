#pragma once

#include "CWidget_E16.h"

namespace E01Example
{
	CWidget_E16::CWidget_E16(int a_nVal, float a_fVal)
		:
		m_nVal(a_nVal),
		m_fVal(a_fVal)
	{
		// Do Somethings
	}

	CWidget_E16 CWidget_E16::operator+(const CWidget_E16& a_rOther)
	{ 
		return CWidget_E16(m_nVal + a_rOther.m_nVal, m_fVal + a_rOther.m_fVal);
	}

	CWidget_E16 CWidget_E16::operator-(const CWidget_E16& a_rOther)
	{ 
		return CWidget_E16(m_nVal - a_rOther.m_nVal, m_fVal - a_rOther.m_fVal);
	}

	CWidget_E16 CWidget_E16::operator*(const CWidget_E16& a_rOther)
	{
		return CWidget_E16(m_nVal * a_rOther.m_nVal, m_fVal * a_rOther.m_fVal);
	}

	CWidget_E16 CWidget_E16::operator/(const CWidget_E16& a_rOther)
	{
		return CWidget_E16(m_nVal / a_rOther.m_nVal, m_fVal / a_rOther.m_fVal);
	}

	float CWidget_E16::GetVal_Int(void) const
	{
		return m_nVal;
	}

	float CWidget_E16::GetVal_Real(void) const
	{
		return m_fVal;
	}
}
