#include "CWidget_E10.h"

namespace E01Example
{
	CWidget_E10::CWidget_E10(int a_nVal, float a_fVal)
		:
		m_pnVal(new int(a_nVal)),
		m_pfVal(new float(a_fVal))
	{
		// Do Something
	}

	CWidget_E10::CWidget_E10(const CWidget_E10& a_rOther)
	{
		/*
		* this 키워드란?
		* - 객체 자신을 참조하는 포인터를 의미한다. (+ 즉, this 키워드를 활용하면 멤버 함수를
		* 호출 한 객체의 다른 멤버에 접근하는 것이 가능하다.)
		* 
		* C++ 과 같이 클래스를 지원하는 언어는 멤버 함수의 첫번째 매개 변수로 항상 해당 함수를
		* 호출 한 객체에 대한 포인터가 전달 된다. (+ 즉, this 키워드는 매개 변수라는 것을
		* 알 수 있다.)
		* 
		* 따라서 멤버 함수 내부에서 동일한 객체에 존재하는 다른 멤버에 접근하기 위해서는
		* 반드시 this 키워드를 명시해야하며 만약 this 키워드를 명시하지 않았을 경우
		* C++ 컴파일러에 의해서 자동으로 this 키워드가 추가 된다.
		* 
		* Ex)
		* class CSomeClass
		* {
		* public:
		* 
		*		void SomeFunc(void)
		*		{
		*			m_nVal = 10;			<- "this->m_nVal = 10" 과 동일한 의미
		*		}
		* 
		* private:
		* 
		*		int m_nVal = 0;
		* };
		* 
		* 위와 같이 멤버 함수 내부에서 멤버 변수에 접근 할 경우 C++ 컴파일러에 의해서 자동으로
		* this 포인터를 통한 역참조 명령문이 자동으로 추가 된다.
		*/
		*this = a_rOther;
	}

	CWidget_E10::CWidget_E10(CWidget_E10&& a_rOther)
	{
		*this = a_rOther;
	}

	CWidget_E10::~CWidget_E10(void)
	{
		SAFE_DELETE(m_pnVal);
		SAFE_DELETE(m_pfVal);
	}

	CWidget_E10& CWidget_E10::operator=(const CWidget_E10& a_rOther)
	{
		SAFE_DELETE(m_pnVal);
		SAFE_DELETE(m_pfVal);

		m_pnVal = new int(*a_rOther.m_pnVal);
		m_pfVal = new float(*a_rOther.m_pfVal);

		return *this;
	}

	CWidget_E10& CWidget_E10::operator=(CWidget_E10&& a_rOther)
	{
		m_pnVal = a_rOther.m_pnVal;
		m_pfVal = a_rOther.m_pfVal;

		a_rOther.m_pnVal = nullptr;
		a_rOther.m_pfVal = nullptr;

		return *this;
	}

	void CWidget_E10::SetVal_Int(int a_nVal)
	{
		*m_pnVal = a_nVal;
	}

	void CWidget_E10::SetVal_Real(float a_fVal)
	{
		*m_pfVal = a_fVal;
	}

	void CWidget_E10::ShowInfo(void)
	{
		std::cout << "정수 : " << *m_pnVal << std::endl;
		std::cout << "실수 : " << *m_pfVal << std::endl;
	}
}
