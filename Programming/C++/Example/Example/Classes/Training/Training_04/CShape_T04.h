#pragma once

#include "../../Global/Define/KDefine+Global.h"
#include "KDefine+Training_04.h"

namespace T01Training
{
	/**
	* 도형
	*/
	class CShape_T04
	{
	public:			// public 함수

		/** 생성자 */
		CShape_T04(EColor_T04 a_eColor);

		/** 도형을 그린다 */
		virtual void Draw(void);

	public:			// public 접근 함수

		/** 색상을 반환한다 */
		std::string GetStr_Color(void) const;

		/** 모양을 반환한다 */
		virtual std::string GetStr_Shape(void) const;

	private:			// private 변수

		EColor_T04 m_eColor = EColor_T04::NONE;
	};

	/**
	* 선
	*/
	class CLine_T04 : public CShape_T04
	{
	public:			// public 함수

		/** 생성자 */
		CLine_T04(EColor_T04 a_eColor);

		/** 도형을 그린다 */
		virtual void Draw(void) override;

	public:			// public 접근 함수

		/** 모양을 반환한다 */
		virtual std::string GetStr_Shape(void) const override;
	};

	/**
	* 삼각형
	*/
	class CTriangle_T04 : public CShape_T04
	{
	public:			// public 함수

		/** 생성자 */
		CTriangle_T04(EColor_T04 a_eColor);

		/** 도형을 그린다 */
		virtual void Draw(void) override;

	public:			// public 접근 함수

		/** 모양을 반환한다 */
		virtual std::string GetStr_Shape(void) const override;
	};

	/**
	* 사각형
	*/
	class CRectangle_T04 : public CShape_T04
	{
	public:			// public 함수

		/** 생성자 */
		CRectangle_T04(EColor_T04 a_eColor);

		/** 도형을 그린다 */
		virtual void Draw(void) override;

	public:			// public 접근 함수

		/** 모양을 반환한다 */
		virtual std::string GetStr_Shape(void) const override;
	};
}
