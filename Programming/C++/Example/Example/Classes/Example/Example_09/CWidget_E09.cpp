#include "CWidget_E09.h"

namespace E01Example
{
	/*
	* 위임 생성자 (Delegating Constructor) 란?
	* - 생성자에서 다른 생성자를 호출 할 수 있는 기능을 의미한다. (+ 즉, 위임 생성자를 활용하면
	* 객체를 초기화하기 위한 명령문의 중복을 줄이는 것이 가능하다.)
	*/
	CWidget_E09::CWidget_E09(void)
		: 
		CWidget_E09(0, 0.0f)
	{
		// Do Something
	}
	
	/*
	* 멤버 이니셜라이저 (Member Initializer) 란?
	* - 생성자가 호출 되지 전에 멤버를 초기화하기 위한 기능을 의미한다. (+ 즉, 멤버 이니셜라이저는
	* 생성자 내부에 작성 된 명령문이 실행 되기 전에 동작한다는 것을 알 수 있다.)
	* 
	* C++ 에서 멤버를 초기화하는 것은 멤버 이니셜라이저에서만 가능하며
	* 생성자 내부에 작성 된 명령문이 실행 되는 시점에는 이미 멤버의 선언이 완료 된다는 특징이
	* 존재한다. (+ 즉, 생성자 내부에서 멤버 변수에 데이터를 할당 할 경우 이는 이미 선언이 완료 된
	* 멤버 변수에 데이터를 할당한다는 것을 의미한다.)
	* 
	* 따라서 클래스 내부에 상수 멤버가 존재 할 경우 반드시 상수를 선언 할 때 초기화 데이터를
	* 할당하거나 멤버 이니셜라이저에서 상수에 초기화 데이터를 할당해줘야한다.
	*/
	CWidget_E09::CWidget_E09(int a_nVal, float a_fVal)
		:
		m_nVal(a_nVal),
		m_fVal(a_fVal)
	{
		// Do Something
	}
	
	CWidget_E09::~CWidget_E09(void)
	{
		std::cout << "~CWidget_E09 소멸자 호출!" << std::endl;
	}

	void CWidget_E09::ShowInfo(void)
	{
		std::cout << "정수 : " << m_nVal << std::endl;
		std::cout << "실수 : " << m_fVal << std::endl;
	}
	
	void CWidget_E09::SetVal_Int(int a_nVal)
	{
		m_nVal = a_nVal;
	}
	
	void CWidget_E09::SetVal_Real(float a_fVal)
	{
		m_fVal = a_fVal;
	}
}
