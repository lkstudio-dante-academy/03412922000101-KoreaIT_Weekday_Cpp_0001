#pragma once

#include "../../Global/Define/KDefine+Global.h"

namespace T01Training
{
	/**
	* 연결 리스트
	*/
	class CList_Linked_T05
	{
	private:

		/**
		* 노드
		*/
		struct STNode
		{
			int m_nVal = 0;
			STNode* m_pstNode_Next = nullptr;
		};

	public:			// operator

		/** operator[] */
		int& operator[](int a_nIdx);

		/** operator[] */
		int operator[](int a_nIdx) const;

	public:			// public 함수

		/** 생성자 */
		CList_Linked_T05(void);

		/** 소멸자 */
		virtual ~CList_Linked_T05(void);

		/** 값을 추가한다 */
		void AddVal(int a_nVal);

		/** 값을 제거한다 */
		void RemoveVal(int a_nVal);

	public:			// public 접근 함수

		/** 개수를 반환한다 */
		int GetNumValues(void) const;

	private:			// private 함수

		/** 노드를 탐색한다 */
		STNode* FindNode(int a_nVal);

		/** 노드를 탐색한다 */
		STNode* FindNode_At(int a_nIdx);

	private:			// private 팩토리 함수

		/** 노드를 생성한다 */
		STNode* CreateNode(int a_nVal);

	private:			// private 변수

		STNode* m_pstNode_Head = nullptr;
	};
}
