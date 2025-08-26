#include "CDerived_E13.h"

namespace E01Example
{
	CDerived_E13::CDerived_E13(int a_nVal, float a_fVal, const std::string& a_rStr)
		:
		CBase_E13(a_nVal, a_fVal),
		m_oStr(a_rStr)
	{
		// Do Something
	}

	CDerived_E13::~CDerived_E13(void)
	{
		std::cout << "CDerived::~CDerived(void) 소멸자 호출!\n";
	}

	void CDerived_E13::ShowInfo(void)
	{
		std::cout << "문자열 : " << m_oStr << std::endl;
	}

	void CDerived_E13::ShowInfo_Virtual(void)
	{
		/*
		* 아래와 같이 부모 클래스에 존재하는 동일한 이름의 멤버에 접근하기 위해서는
		* :: (범위 지정 연산자) 를 활용해야한다. (+ 즉, this 키워드를 통해 접근 할 경우
		* 멤버 접근에 대한 우선 순위는 자식 클래스가 더 높기 때문에 부모 클래스에 존재하는 동일한
		* 이름의 멤버에 접근하는 것이 불가능하다는 것을 알 수 있다.)
		*
		* 따라서 자식 클래스에서 부모 클래스에 존재하는 동일한 이름의 멤버에 접근하고 싶다면
		* 반드시 부모 클래스를 직접 명시해줘야한다.
		*/
		CBase_E13::ShowInfo_Virtual();

		this->ShowInfo();
	}
}
