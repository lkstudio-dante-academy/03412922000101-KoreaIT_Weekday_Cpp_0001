#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace E01Example
{
	/**
	* 부모 클래스
	*/
	class CBase_E15
	{
	public:			// public 함수

		/** 생성자 */
		CBase_E15(int a_nVal, float a_fVal);

		/** 정보를 출력한다 */
		virtual void ShowInfo(void);

	private:			// private 변수

		int m_nVal = 0;
		float m_fVal = 0.0f;
	};
}
