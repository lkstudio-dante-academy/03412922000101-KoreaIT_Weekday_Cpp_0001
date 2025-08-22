#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace T01Training
{
	/**
	* 배열
	*/
	class CArray_T02
	{
	public:			// operator

		/** operator= */
		CArray_T02& operator=(const CArray_T02& a_rOther);

	public:			// public 함수

		/** 생성자 */
		CArray_T02(int a_nSize = 5);

		/** 복상 생성자 */
		CArray_T02(const CArray_T02& a_rOther);

		/** 소멸자 */
		~CArray_T02(void);

		/** 값을 추가한다 */
		void AddVal(int a_nVal);

	public:			// public 함수

		/** 값을 반환한다 */
		int GetVal(int a_nIdx) const;

		/** 개수를 반환한다 */
		int GetNumValues(void) const;

	private:			// private 변수

		int m_nSize = 0;
		int m_nNumValues = 0;

		int* m_pnValues = nullptr;
	};
}
