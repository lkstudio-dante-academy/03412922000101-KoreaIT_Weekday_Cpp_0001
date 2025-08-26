#include "CCanvas_T04.h"
#include "CShape_T04.h"

namespace T01Training
{
	CCanvas_T04::CCanvas_T04(void)
	{
		// Do Something
	}

	void CCanvas_T04::AddShape(std::shared_ptr<CShape_T04> a_oShape_Ptr)
	{
		m_oVectorShapes_Ptr.push_back(a_oShape_Ptr);
	}

	void CCanvas_T04::DrawShapes_All(void)
	{
		for(auto oShape_Ptr : m_oVectorShapes_Ptr)
		{
			oShape_Ptr->Draw();
		}
	}

	CCanvas_T04* CCanvas_T04::GetInst(void)
	{
		static CCanvas_T04 oInst;
		return &oInst;
	}
}
