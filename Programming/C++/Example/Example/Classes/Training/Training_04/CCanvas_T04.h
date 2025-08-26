#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace T01Training
{
	class CShape_T04;

	/**
	* 그림판
	*/
	class CCanvas_T04
	{
	public:			// public 함수

		/** 도형을 추가한다 */
		void AddShape(std::shared_ptr<CShape_T04> a_oShape_Ptr);

		/** 모든 도형을 그린다 */
		void DrawShapes_All(void);

	public:			// public 접근 함수

		/** 인스턴스를 반환한다 */
		static CCanvas_T04* GetInst(void);

	private:			// prviate 함수

		/** 생성자 */
		CCanvas_T04(void);

	private:			// private 변수

		std::vector<std::shared_ptr<CShape_T04>> m_oVectorShapes_Ptr;
	};
}
