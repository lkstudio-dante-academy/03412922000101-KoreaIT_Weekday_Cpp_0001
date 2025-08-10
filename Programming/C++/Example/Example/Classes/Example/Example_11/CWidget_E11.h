#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace E01Example
{
	/**
	* 위젯
	*/
	class CWidget_E11
	{
	public:			// public 함수

		/** 값을 증가 시킨다 */
		void IncrVal(int a_nVal);

		/** 정보를 출력한다 */
		void ShowInfo(void);

		/** 정보를 출력한다 */
		static void ShowInfo_Static(void);

	private:			// private 변수

		int m_nVal = 0;
		static int m_nVal_Static;
	};
}
