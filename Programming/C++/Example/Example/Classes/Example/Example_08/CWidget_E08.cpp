#include "CWidget_E08.h"

namespace E01Example
{
	void CWidget_E08::ShowInfo(void)
	{
		/*
		* 아래와 같이 멤버 함수는 일반적인 함수와 달리 멤버 변수에 접근하는 것이 가능하다. (+ 즉,
		* 함수가 동작하는데 필요한 데이터가 멤버 변수에 존재한다면 해당 데이터는 입력으로
		* 전달 받을 필요가 없다는 것을 알 수 있다.)
		*/
		std::cout << "정수 : " << m_nVal << std::endl;
		std::cout << "실수 : " << m_fVal << std::endl;
	}
}
