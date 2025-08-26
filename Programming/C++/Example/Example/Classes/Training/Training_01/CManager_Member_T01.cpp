#include "CManager_Member_T01.h"
#include "CMember_T01.h"

namespace T01Training
{
	CManager_Member_T01::~CManager_Member_T01(void)
	{
		for(auto pMember : m_oVectorMembers)
		{
			SAFE_DELETE(pMember);
		}
	}

	void CManager_Member_T01::AddMember(const std::string& a_rName,
		const std::string& a_rPNumber)
	{
		auto pMember = new CMember_T01(a_rName, a_rPNumber);
		m_oVectorMembers.push_back(pMember);
	}

	void CManager_Member_T01::RemoveMember(const std::string& a_rName)
	{
		int nResult = this->FindMember(a_rName);
		m_oVectorMembers.erase(m_oVectorMembers.begin() + nResult);
	}

	void CManager_Member_T01::SearchMember(const std::string& a_rName)
	{
		int nResult = this->FindMember(a_rName);
		m_oVectorMembers[nResult]->ShowInfo();
	}

	void CManager_Member_T01::ShowMembers_All(void)
	{
		for(auto pMember : m_oVectorMembers)
		{
			pMember->ShowInfo();
			std::cout << std::endl;
		}
	}

	int CManager_Member_T01::FindMember(const std::string& a_rName)
	{
		auto oResult = std::find_if(m_oVectorMembers.begin(),
			m_oVectorMembers.end(), [&a_rName](CMember_T01* a_pMember) -> bool
		{
			return a_rName == a_pMember->GetName();
		});

		return (oResult != m_oVectorMembers.end()) ? oResult - m_oVectorMembers.begin() : -1;
	}

	CManager_Member_T01* CManager_Member_T01::GetInst(void)
	{
		static CManager_Member_T01 oInst;
		return &oInst;
	}
}
