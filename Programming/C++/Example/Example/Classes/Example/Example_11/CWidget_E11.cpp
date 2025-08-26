#include "CWidget_E11.h"

/*
* 클래스 변수
*/
int E01Example::CWidget_E11::m_nVal_Static = 0;

namespace E01Example
{
	void CWidget_E11::IncrVal(int a_nVal)
	{
		m_nVal += a_nVal;
		CWidget_E11::m_nVal_Static += a_nVal;
	}

	void CWidget_E11::ShowInfo(void)
	{
		std::cout << "멤버 변수 : " << m_nVal << std::endl;
		CWidget_E11::ShowInfo_Static();
	}

	void CWidget_E11::ShowInfo_Static(void)
	{
		std::cout << "클래스 변수 : " << CWidget_E11::m_nVal_Static << std::endl;

		/*
		* 클래스 함수 내부에서는 멤버 변수에 접근하는 것이 불가능하다.
		*
		* 멤버 변수는 객체에 종속 되기 때문에 멤버 변수에 접근하기 위해서는 객체에 대한 포인터가
		* 필요하다.
		*
		* 멤버 함수는 함수를 호출하는 과정에서 해당 함수를 호출 한 객체에 대한 포인터가 함수의
		* 첫번째 매개 변수 (this) 로 전달 되지만 클래스 함수는 객체를 통하지 않고
		* 호출이 가능하기 때문에 멤버 함수와 달리 객체에 대한 포인터가 전달 되지 않는다.
		*
		* 따라서 클래스 함수 내부에서 멤버 변수에 접근하고 싶다면 객체에 대한 포인터를 명시적으로
		* 전달해줘야한다.
		*/
		//m_nVal = 10;
	}
}
