#pragma once

#include "../../Global/Define/KDefine+Global.h"
#include "CBase_E12.h"

namespace E01Example
{
	/**
	* 자식 클래스
	*/
	class CDerived_E12 : public CBase_E12
	{
	public:			// public 함수

		/** 생성자 */
		CDerived_E12(int a_nVal, float a_fVal, const std::string& a_rStr);

		/** 소멸자 */
		~CDerived_E12(void);

		/** 정보를 출력한다 */
		void ShowInfo_Child(void);

	private:			// private 변수

		std::string m_oStr = "";
	};
}
