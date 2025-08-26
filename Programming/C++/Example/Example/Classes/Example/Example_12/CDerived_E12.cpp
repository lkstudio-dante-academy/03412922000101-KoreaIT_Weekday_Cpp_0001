#include "CDerived_E12.h"

namespace E01Example
{
	CDerived_E12::CDerived_E12(int a_nVal, float a_fVal, const std::string& a_rStr)
		:
		/*
		* 아래와 같이 부모 클래스의 생성자는 자식 클래스의 멤버 이니셜라이저에서 호출해줘야한다.
		* (+ 즉, 자식 클래스의 생성자에 작성 된 명령문이 실행 되기 전에 부모 클래스의 생성자가
		* 호출 되어야한다는 것을 의미한다.)
		*/
		CBase_E12(a_nVal, a_fVal),

		m_oStr(a_rStr)
	{
		// Do Something
	}

	CDerived_E12::~CDerived_E12(void)
	{
		std::cout << "CDerived::~CDerived(void) 소멸자 호출!\n";
	}

	void CDerived_E12::ShowInfo_Child(void)
	{
		/*
		* 아래와 같이 자식 클래스는 부모 클래스에 정의 된 멤버에 접근하는 것이 가능하다. (+ 즉,
		* 자식 클래스를 통해 생성 된 객체 내부에는 부모 클래스에 정의한 멤버도 존재한다는 것을
		* 알 수 있다.)
		*/
		this->ShowInfo_Parent();

		std::cout << "문자열 : " << m_oStr << std::endl;
	}
}
