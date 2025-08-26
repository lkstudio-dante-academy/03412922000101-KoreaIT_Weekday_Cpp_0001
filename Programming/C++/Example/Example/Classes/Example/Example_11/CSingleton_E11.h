#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 싱글턴 패턴 (Singleton Pattern) 이란?
* - 디자인 패턴 중 하나로서 객체의 생성 개수를 1 개로 제한하는 구조를 의미한다. (+ 즉,
* 싱글턴 패턴을 활용하면 프로그램 전체에서 접근 가능한 전역 객체를 생성하는 것이 가능하다.)
*/
namespace E01Example
{
	/**
	* 싱글턴
	*/
	class CSingleton_E11
	{
	public:			// public 접근 함수

		/** 값을 반환한다 */
		int GetVal(void);

		/** 값을 변경한다 */
		void SetVal(int a_nVal);

		/** 인스턴스를 반환한다 */
		static CSingleton_E11* GetInst(void);

	private:			// private 함수

		/*
		* 아래와 같이 생성자를 private 수준으로 명시하면 클래스 외부에서 객체 생성을 하지 못하게
		* 금지 시키는 것이 가능하다. (+ 즉, 객체가 생성 될려면 생성자가 반드시 호출 되어야하기
		* 때문이다.)
		*
		* 따라서 싱글턴 패턴을 구현하기 위해서는 객체 생성을 자유롭게 못하게 생성자를
		* private 수준으로 명시 할 필요가 있다.
		*/

		/** 생성자 */
		CSingleton_E11(void);

	private:			// private 변수

		int m_nVal = 0;
		static CSingleton_E11* m_pInst;
	};
}
