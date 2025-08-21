#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace T01Training
{
	/**
	* 회원
	*/
	class CMember_T01
	{
	public:			// public 함수

		/** 생성자 */
		CMember_T01(const std::string& a_rName, const std::string& a_rPNumber);

		/** 정보를 출력한다 */
		void ShowInfo(void);

	public:			// public 접근 함수

		/** 이름을 반환한다 */
		const std::string& GetName(void) const;

	private:			// private 변수

		std::string m_oName = "";
		std::string m_oPNumber = "";
	};
}
