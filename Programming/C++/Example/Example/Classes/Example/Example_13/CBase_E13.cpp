#include "CBase_E13.h"

namespace E01Example
{
	CBase_E13::CBase_E13(int a_nVal, float a_fVal)
		:
		m_nVal(a_nVal),
		m_fVal(a_fVal)
	{
		// Do Something
	}

	CBase_E13::~CBase_E13(void)
	{
		std::cout << "CBase::~CBase(void) 소멸자 호출!\n\n";
	}

	void CBase_E13::ShowInfo(void)
	{
		std::cout << "정수 : " << m_nVal << std::endl;
		std::cout << "실수 : " << m_fVal << std::endl;
	}

	void CBase_E13::ShowInfo_Virtual(void)
	{
		this->ShowInfo();
	}
}
