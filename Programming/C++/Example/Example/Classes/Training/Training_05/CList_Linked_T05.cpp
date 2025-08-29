#include "CList_Linked_T05.h"

namespace T01Training
{
	CList_Linked_T05::CList_Linked_T05(void)
	{
		m_pstNode_Head = new STNode();
	}

	CList_Linked_T05::~CList_Linked_T05(void)
	{
		auto pstNode = m_pstNode_Head;

		while(pstNode != nullptr)
		{
			auto pstNode_Remove = pstNode;
			pstNode = pstNode->m_pstNode_Next;

			SAFE_DELETE(pstNode_Remove);
		}
	}

	int& CList_Linked_T05::operator[](int a_nIdx)
	{
		auto pstNode = this->FindNode_At(a_nIdx);
		return pstNode->m_pstNode_Next->m_nVal;
	}

	int CList_Linked_T05::operator[](int a_nIdx) const
	{
		return const_cast<CList_Linked_T05&>(*this)[a_nIdx];
	}

	void CList_Linked_T05::AddVal(int a_nVal)
	{
		auto pstNode_Tail = m_pstNode_Head;

		while(pstNode_Tail->m_pstNode_Next != nullptr)
		{
			pstNode_Tail = pstNode_Tail->m_pstNode_Next;
		}

		pstNode_Tail->m_pstNode_Next = this->CreateNode(a_nVal);
	}

	void CList_Linked_T05::RemoveVal(int a_nVal)
	{
		auto pstNode = this->FindNode(a_nVal);
		auto pstNode_Remove = pstNode->m_pstNode_Next;

		pstNode->m_pstNode_Next = pstNode_Remove->m_pstNode_Next;
	}

	int CList_Linked_T05::GetNumValues(void) const
	{
		int nNumValues = 0;
		auto pstNode = m_pstNode_Head;

		while(pstNode->m_pstNode_Next != nullptr)
		{
			nNumValues += 1;
			pstNode = pstNode->m_pstNode_Next;
		}

		return nNumValues;
	}

	CList_Linked_T05::STNode* CList_Linked_T05::FindNode(int a_nVal)
	{
		auto pstNode = m_pstNode_Head;

		while(pstNode->m_pstNode_Next != nullptr)
		{
			// 노드가 존재 할 경우
			if(a_nVal == pstNode->m_pstNode_Next->m_nVal)
			{
				break;
			}

			pstNode = pstNode->m_pstNode_Next;
		}

		return pstNode;
	}

	CList_Linked_T05::STNode* CList_Linked_T05::FindNode_At(int a_nIdx)
	{
		auto pstNode = m_pstNode_Head;

		for(int i = 0; i < a_nIdx; ++i)
		{
			pstNode = pstNode->m_pstNode_Next;
		}

		return pstNode;
	}

	CList_Linked_T05::STNode* CList_Linked_T05::CreateNode(int a_nVal)
	{
		auto pstNode = new STNode();
		pstNode->m_nVal = a_nVal;

		return pstNode;
	}
}
