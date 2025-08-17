#pragma once

#include "../../Global/Define/KDefine+Global.h"
#include "CBase_E14.h"

namespace E01Example
{
	/**
	* 자식 클래스
	*/
	class CDerived_E14 : public CBase_E14
	{
	public:			// public 함수

		/** 생성자 */
		CDerived_E14(int a_nVal, float a_fVal, const std::string& a_rStr);

		/** 정보를 출력한다 */
		virtual void ShowInfo(void) override;

	private:			// private 변수

		std::string m_oStr = "";
	};
}
