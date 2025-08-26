#pragma once

#include "../../Global/Define/KDefine+Global.h"
#include "CBase_E13.h"

namespace E01Example
{
	/**
	* 자식 클래스
	*/
	class CDerived_E13 : public CBase_E13
	{
	public:			// public 함수

		/** 생성자 */
		CDerived_E13(int a_nVal, float a_fVal, const std::string& a_rStr);

		/** 소멸자 */
		virtual ~CDerived_E13(void);

		/** 정보를 출력한다 */
		void ShowInfo(void);

		/*
		* override 키워드란?
		* - 부모 클래스에 존재하는 가상 함수를 자식 클래스가 오버라이드 하겠다고 C++ 컴파일러에게
		* 알리는 역할을 수행하는 키워드를 의미한다. (+ 즉, 잘못된 함수를 오버라이드 할 경우
		* C++ 컴파일러에 의해서 컴파일 에러가 발생한다는 것을 알 수 있다.)
		*
		* 함수 오버라이드 (Function Override) 란?
		* - 부모 클래스에 정의 된 가상 함수를 자식 클래스에서 재정의하는 것을 의미한다.
		*
		* 부모 클래스에 정의 된 가상 함수를 자식 클래스에서 재정의 할 경우 부모 클래스에 정의 된
		* 가상 함수 대신에 자식 클래스에서 재정의한 가상 함수가 호출되는 특징이 존재한다.
		*
		* 따라서 함수 오버라이드를 활용하면 자식 클래스를 통해 생성 된 객체를
		* 부모 클래스 포인터로 참조하고 있는 상황에서 부모 클래스 포인터로 자식 클래스에 정의 된
		* 가상 함수를 호출하는 것이 가능하다. (+ 즉, 생성 된 객체를 참조하고 있는
		* 포인터 형에 상관 없이 참조하고 있는 객체의 멤버 함수를 호출하는 것이 가능하다.)
		*/

		/** 정보를 출력한다 */
		virtual void ShowInfo_Virtual(void) override;

	private:			// private 함수

		std::string m_oStr = "";
	};
}
