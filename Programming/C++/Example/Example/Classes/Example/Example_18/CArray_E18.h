#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace E01Example
{
	/**
	* 배열
	*/
	template<typename T>
	class CArray_E18
	{
	public:			// operator

		/** operator= */
		CArray_E18<T>& operator=(const CArray_E18<T>& a_rOther);

		/** operator[] */
		T& operator[](int a_nIdx);

		/** operator[] */
		T operator[](int a_nIdx) const;

	public:			// public 함수

		/** 생성자 */
		CArray_E18(int a_nSize = 5);

		/** 복사 생성자 */
		CArray_E18(const CArray_E18& a_rOther);

		/** 소멸자 */
		virtual ~CArray_E18(void);

		/** 값을 추가한다 */
		void AddVal(T a_tVal);

	public:			// public 접근 함수

		/** 개수를 반환한다 */
		int GetNumValues(void) const;

	private:			// private 변수

		int m_nSize = 0;
		int m_nNumValues = 0;

		T* m_ptValues = nullptr;
	};
}

#include "CArray_E18.inl"
