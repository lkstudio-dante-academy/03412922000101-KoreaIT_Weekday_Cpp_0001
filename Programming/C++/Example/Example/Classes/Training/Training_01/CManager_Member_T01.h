#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace T01Training
{
	class CMember_T01;

	/**
	* 회원 관리자
	*/
	class CManager_Member_T01
	{
	public:			// public 함수

		/** 소멸자 */
		~CManager_Member_T01(void);

		/** 회원을 추가한다 */
		void AddMember(const std::string& a_rName, const std::string& a_rPNumber);

		/** 회원을 제거한다 */
		void RemoveMember(const std::string& a_rName);

		/** 회원을 검색한다 */
		void SearchMember(const std::string& a_rName);

		/** 모든 회원을 출력한다 */
		void ShowMembers_All(void);

		/** 회원을 탐색한다 */
		int FindMember(const std::string& a_rName);

	public:			// public 접근 함수

		/** 인스턴스를 반환한다 */
		static CManager_Member_T01* GetInst(void);

	private:			// private 변수

		std::vector<CMember_T01*> m_oVectorMembers;
	};
}
