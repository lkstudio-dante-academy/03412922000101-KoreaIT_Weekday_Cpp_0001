#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace E01Example
{
	/**
	* 부모 클래스
	*/
	class CBase_E14
	{
	public:			// public 함수

		/** 생성자 */
		CBase_E14(int a_nVal, float a_fVal);

		/*
		* 순수 가상 함수 (Pure Virtual Function) 란?
		* - 함수 몸체를 지닐 수 없는 함수를 의미한다. (+ 즉, 순수 가상 함수는 구현부를
		* 정의하는 것이 불가능하다.)
		*
		* 순수 가상 함수는 함수의 선언만 지원하기 때문에 인터페이스를 정의하는 용도로 주로
		* 활용 된다. (+ 즉, 부모 클래스는 인터페이스만 제공하고 실제 구현은 자식 클래스에서
		* 정의함으로서 함수의 실제 구현부를 가리는 것이 가능하다.)
		*/

		/** 정보를 출력한다 */
		virtual void ShowInfo(void) = 0;

	protected:			// protected 함수

		/*
		* 상수 멤버 함수 (Constant Member Function) 란?
		* - 일반적인 멤버 함수와 달리 멤버 함수 내부에서 멤버 변수의 값을 변경하는 것이 불가능한
		* 함수를 의미한다. (+ 즉, 상수 멤버 함수 내부에서는 멤버 변수의 값을 읽어들이는 것만
		* 가능하다.)
		*
		* C++ 은 const 키워드를 이용해서 상수 객체를 생성하는 것이 가능하며 상수 객체는
		* 일반적인 멤버 함수를 호출하는 것이 불가능하다. (+ 즉, 일반적인 멤버 함수는 함수 내부에서
		* 멤버 변수의 값을 변경하는 것이 가능하기 떄문이다.)
		*
		* 따라서 상수 객체를 통해 멤버 함수를 호출하고 싶다면 호출 할 함수를 상수 멤버 함수로
		* 정의 할 필요가 있다. (+ 즉, 상수 멤버 함수는 함수 내부에서 멤버 변수의 값을 변경하는 것이
		* 불가능하기 때문에 상수 객체도 호출하는 것이 가능하다.)
		*/

		/** 정수 값을 반환한다 */
		int GetVal_Int(void) const;

		/** 실수 값을 반환한다 */
		float GetVal_Real(void) const;

	private:			// private 변수

		int m_nVal = 0;
		float m_fVal = 0.0f;
	};
}
