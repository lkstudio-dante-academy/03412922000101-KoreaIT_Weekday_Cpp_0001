#include "CMember_T01.h"

namespace T01Training
{
	CMember_T01::CMember_T01(const std::string& a_rName, const std::string& a_rPNumber)
		:
		m_oName(a_rName),
		m_oPNumber(a_rPNumber)
	{
		// Do Something
	}

	void CMember_T01::ShowInfo(void)
	{
		std::cout << "이름 : " << m_oName << std::endl;
		std::cout << "전화 번호 : " << m_oPNumber << std::endl;
	}

	const std::string& CMember_T01::GetName(void) const
	{
		return m_oName;
	}
}
