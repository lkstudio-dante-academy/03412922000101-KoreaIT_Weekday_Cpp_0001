#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace E01Example
{
	template<typename T>
	inline CArray_E18<T>::CArray_E18(int a_nSize)
		:
		m_nSize(a_nSize)
	{
		m_ptValues = new T[m_nSize];
	}

	template<typename T>
	inline CArray_E18<T>::CArray_E18(const CArray_E18& a_rOther)
	{
		*this = a_rOther;
	}

	template<typename T>
	inline CArray_E18<T>::~CArray_E18(void)
	{
		SAFE_DELETE_ARRAY(m_ptValues);
	}

	template<typename T>
	inline CArray_E18<T>& CArray_E18<T>::operator=(const CArray_E18<T>& a_rOther)
	{
		SAFE_DELETE_ARRAY(m_ptValues);
		m_ptValues = new T[a_rOther.m_nSize];

		for(int i = 0; i < a_rOther.m_nNumValues; ++i)
		{
			m_ptValues[i] = a_rOther.m_ptValues[i];
		}

		m_nSize = a_rOther.m_nSize;
	}
	
	template<typename T>
	inline T& CArray_E18<T>::operator[](int a_nIdx)
	{
		return m_ptValues[a_nIdx];
	}
	
	template<typename T>
	inline T CArray_E18<T>::operator[](int a_nIdx) const
	{
		return const_cast<CArray_E18<T>&>(*this)[a_nIdx];
	}
	
	template<typename T>
	inline void CArray_E18<T>::AddVal(T a_tVal)
	{
		// 배열이 가득 찼을 경우
		if(m_nNumValues >= m_nSize)
		{
			auto ptValues_New = new T[m_nSize * 2];

			for(int i = 0; i < m_nNumValues; ++i)
			{
				ptValues_New[i] = m_ptValues[i];
			}

			SAFE_DELETE_ARRAY(m_ptValues);

			m_nSize *= 2;
			m_ptValues = ptValues_New;
		}

		m_ptValues[m_nNumValues++] = a_tVal;
	}
	
	template<typename T>
	inline int CArray_E18<T>::GetNumValues(void) const
	{
		return m_nNumValues;
	}
}
