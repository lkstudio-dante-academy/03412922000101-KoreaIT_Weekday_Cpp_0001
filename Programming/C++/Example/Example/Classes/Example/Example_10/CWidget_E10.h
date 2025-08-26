#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace E01Example
{
	/**
	* 위젯
	*/
	class CWidget_E10
	{
	public:			// operator

		/*
		* 복사 할당 연산자 (Copy Assignment Operator) 란?
		* - 객체를 복사하기 위해서 호출되는 연산자 오버로딩 함수를 의미한다. (+ 즉,
		* 복사 할당 연산자를 활용하면 객체가 지니고 있는 멤버를 다른 객체에 복사하는 것이 가능하다.)
		*
		* 복사 생성자는 객체를 생성 할 때만 호출 되기 때문에 이미 생성이 완료 된 객체를 대상으로는
		* 사용이 불가능하다.
		*
		* 따라서 생성이 완료 된 객체를 대상으로 복사를 수행하고 싶다면 복사 할당 연산자를
		* 활용해야한다.
		*
		* 만약 클래스에 복사 할당 연산자가 없을 경우 복사 생성자와 마찬가지로 C++ 컴파일러에 의해서
		* 자동으로 복사 할당 연산자가 추가 된다.
		*
		* 단, C++ 컴파일러가 자동으로 추가해주는 복사 할당 연산자는 내부적으로 얕은 복사를
		* 수행하기 때문에 얕은 복사가 문제가 될 경우 복사 생성자와 마찬가지로 깊은 복사를 수행하는
		* 복사 할당 연산자를 직접 정의해줘야한다.
		*/

		/** operator= */
		CWidget_E10& operator=(const CWidget_E10& a_rOther);

		/*
		* 이동 할당 연산자 (Move Assignment Operator) 란?
		* - 객체가 지니고 있는 멤버를 이동하기 위해 호출 되는 연산자 오버로딩 함수를 의미한다.
		* (+ 즉, 이동 할당 연산자를 활용하면 객체가 지니고 있는 멤버를 다른 객체에 이동 시키는 것이
		* 가능하다.)
		*
		* 이동 할당 연산자 또한 복사 할당 연산자와 마찬가지로 이미 생성이 완료 된 객체를 대상으로
		* 멤버를 이동 시키기 위해 사용 된다.
		*/

		/** operator= */
		CWidget_E10& operator=(CWidget_E10&& a_rOther);

	public:			// public 함수

		/** 생성자 */
		CWidget_E10(int a_nVal, float a_fVal);

		/** 복사 생성자 */
		CWidget_E10(const CWidget_E10& a_rOther);

		/** 이동 생성자 */
		CWidget_E10(CWidget_E10&& a_rOther);

		/** 소멸자 */
		~CWidget_E10(void);

		/** 정보를 출력한다 */
		void ShowInfo(void);

	public:			// public 접근 함수

		/** 정수를 변경한다 */
		void SetVal_Int(int a_nVal);

		/** 실수를 변경한다 */
		void SetVal_Real(float a_fVal);

	private:			// private 변수

		int* m_pnVal = nullptr;
		float* m_pfVal = nullptr;
	};
}
