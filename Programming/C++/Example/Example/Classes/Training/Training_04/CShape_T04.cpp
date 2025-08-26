#include "CShape_T04.h"

namespace T01Training
{
#pragma region 도형
	CShape_T04::CShape_T04(EColor_T04 a_eColor)
		:
		m_eColor(a_eColor)
	{
		// Do Something
	}

	void CShape_T04::Draw(void)
	{
		// Do Something
	}

	std::string CShape_T04::GetStr_Color(void) const
	{
		std::string oStrings[] =
		{
			"빨간색", "녹색", "파란색"
		};

		return oStrings[(int)m_eColor];
	}

	std::string CShape_T04::GetStr_Shape(void) const
	{
		return "";
	}
#pragma endregion // 도형

#pragma region 선
	CLine_T04::CLine_T04(EColor_T04 a_eColor)
		:
		CShape_T04(a_eColor)
	{
		// Do Something
	}

	void CLine_T04::Draw(void)
	{
		std::string oColor = this->GetStr_Color();
		std::cout << oColor << " 선을 그렸습니다.\n";
	}

	std::string CLine_T04::GetStr_Shape(void) const
	{
		return "선";
	}
#pragma endregion // 선

#pragma region 삼각형
	CTriangle_T04::CTriangle_T04(EColor_T04 a_eColor)
		:
		CShape_T04(a_eColor)
	{
		// Do Something
	}

	void CTriangle_T04::Draw(void)
	{
		std::string oColor = this->GetStr_Color();
		std::cout << oColor << " 삼각형을 그렸습니다.\n";
	}

	std::string CTriangle_T04::GetStr_Shape(void) const
	{
		return "삼각형";
	}
#pragma endregion // 삼각형

#pragma region 사각형
	CRectangle_T04::CRectangle_T04(EColor_T04 a_eColor)
		:
		CShape_T04(a_eColor)
	{
		// Do Something
	}

	void CRectangle_T04::Draw(void)
	{
		std::string oColor = this->GetStr_Color();
		std::cout << oColor << " 사각형을 그렸습니다.\n";
	}

	std::string CRectangle_T04::GetStr_Shape(void) const
	{
		return "사각형";
	}
#pragma endregion // 사각형
}
