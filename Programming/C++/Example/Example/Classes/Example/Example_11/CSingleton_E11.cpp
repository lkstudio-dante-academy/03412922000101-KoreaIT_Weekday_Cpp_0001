#include "CSingleton_E11.h"

/*
* 클래스 변수
*/
E01Example::CSingleton_E11* E01Example::CSingleton_E11::m_pInst = nullptr;

namespace E01Example
{
	CSingleton_E11::CSingleton_E11(void)
	{
		// Do Something
	}

	int CSingleton_E11::GetVal(void)
	{
		return m_nVal;
	}

	void CSingleton_E11::SetVal(int a_nVal)
	{
		m_nVal = a_nVal;
	}

	CSingleton_E11* CSingleton_E11::GetInst(void)
	{
		// 인스턴스가 없을 경우
		if(CSingleton_E11::m_pInst == nullptr)
		{
			CSingleton_E11::m_pInst = new CSingleton_E11();
		}

		return CSingleton_E11::m_pInst;
	}
}
