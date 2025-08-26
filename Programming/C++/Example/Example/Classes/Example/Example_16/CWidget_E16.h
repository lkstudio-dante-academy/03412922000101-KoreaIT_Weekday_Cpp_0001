#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace E01Example
{
	/**
	* 위젯
	*/
	class CWidget_E16
	{
	public:			// operator

		/** operator+ */
		CWidget_E16 operator+(const CWidget_E16& a_rOther);

		/** operator- */
		CWidget_E16 operator-(const CWidget_E16& a_rOther);

		/** operator* */
		CWidget_E16 operator*(const CWidget_E16& a_rOther);

		/** operator/ */
		CWidget_E16 operator/(const CWidget_E16& a_rOther);

	public:			// public 함수

		/** 생성자 */
		CWidget_E16(int a_nVal, float a_fVal);

	public:			// public 접근 함수

		/** 정수 값을 반환한다 */
		float GetVal_Int(void) const;

		/** 실수 값을 반환한다 */
		float GetVal_Real(void) const;

	private:			// private 변수

		int m_nVal = 0;
		float m_fVal = 0.0f;
	};
}
