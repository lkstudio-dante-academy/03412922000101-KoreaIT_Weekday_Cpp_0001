#include "CArray_T02.h"

namespace T01Training
{
    CArray_T02::CArray_T02(int a_nSize)
        :
        m_nSize(a_nSize)
    { 
        m_pnValues = new int[m_nSize];
    }

    CArray_T02::CArray_T02(const CArray_T02 & a_rOther)
    { 
        *this = a_rOther;
    }

    CArray_T02::~CArray_T02(void)
    { 
        SAFE_DELETE_ARRAY(m_pnValues);
    }

    CArray_T02& CArray_T02::operator=(const CArray_T02& a_rOther)
    {
        SAFE_DELETE_ARRAY(m_pnValues);
        m_pnValues = new int[a_rOther.m_nSize];

        for(int i = 0; i < a_rOther.m_nNumValues; ++i)
        {
            m_pnValues[i] = a_rOther.m_pnValues[i];
        }

        m_nSize = a_rOther.m_nSize;
        m_nNumValues = a_rOther.m_nNumValues;

        return *this;
    }

    void CArray_T02::AddVal(int a_nVal)
    {
        // 배열이 가득 찼을 경우
        if(m_nNumValues >= m_nSize)
        {
            int* pnValues_New = new int[m_nSize * 2];
            memcpy(pnValues_New, m_pnValues, sizeof(int) * m_nNumValues);

            SAFE_DELETE_ARRAY(m_pnValues);

            m_nSize *= 2;
            m_pnValues = pnValues_New;
        }

        m_pnValues[m_nNumValues++] = a_nVal;
    }

    int CArray_T02::GetVal(int a_nIdx) const
    {
        return m_pnValues[a_nIdx];
    }

    int CArray_T02::GetNumValues(void) const
    {
        return m_nNumValues;
    }
}
