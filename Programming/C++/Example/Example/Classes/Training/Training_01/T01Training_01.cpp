#include "T01Training_01.h"
#include "KDefine+Training_01.h"

#include "CManager_Member_T01.h"

namespace T01Training
{
	/** 메뉴를 출력한다 */
	static void PrintMenu_T01(void);

	/** 회원을 추가한다 */
	static void AddMember_T01(CManager_Member_T01* a_pManager);

	/** 회원을 제거한다 */
	static void RemoveMember_T01(CManager_Member_T01* a_pManager);

	/** 회원을 검색한다 */
	static void SearchMember_T01(CManager_Member_T01* a_pManager);

	/** 모든 회원을 출력한다 */
	static void PrintMembers_All_T01(CManager_Member_T01* a_pManager);

	int T01Training_01(int argc, char* args[])
	{
		CManager_Member_T01 oManager;

		do
		{
			PrintMenu_T01();
			int nMenu = (int)EMenu_T01::NONE;

			std::cin >> nMenu;
			getchar();

			auto eMenu = (EMenu_T01)(nMenu - 1);

			// 종료 일 경우
			if(eMenu == EMenu_T01::EXIT)
			{
				break;
			}

			switch(eMenu)
			{
				case EMenu_T01::ADD_MEMBER:
					AddMember_T01(&oManager);
					break;

				case EMenu_T01::REMOVE_MEMBER:
					RemoveMember_T01(&oManager);
					break;

				case EMenu_T01::SEARCH_MEMBER:
					SearchMember_T01(&oManager);
					break;

				case EMenu_T01::PRINT_MEMBERS_ALL:
					PrintMembers_All_T01(&oManager);
					break;
			}

			std::cout << std::endl;
		} while(true);

		std::cout << "프로그램을 종료합니다.\n";
		return 0;
	}

	void PrintMenu_T01(void)
	{
		std::cout << "=====> 메뉴 <=====\n";
		std::cout << "1. 회원 추가\n";
		std::cout << "2. 회원 제거\n";
		std::cout << "3. 회원 검색\n";
		std::cout << "4. 모든 회원 출력\n";
		std::cout << "5. 종료\n";

		std::cout << "\n선택 : ";
	}

	void AddMember_T01(CManager_Member_T01* a_pManager)
	{ 
		std::string oName = "";
		std::string oPNumber = "";

		std::cout << "이름 입력 : ";
		std::getline(std::cin, oName);

		std::cout << "전화 번호 입력 : ";
		std::getline(std::cin, oPNumber);

		int nResult = a_pManager->FindMember(oName);

		// 회원이 존재 할 경우
		if(nResult >= 0)
		{
			std::cout << oName << " 은(는) 이미 존재하는 회원입니다.\n";
			return;
		}

		a_pManager->AddMember(oName, oPNumber);
		std::cout << oName << " 을(를) 추가했습니다.\n";
	}

	void RemoveMember_T01(CManager_Member_T01* a_pManager)
	{ 
		std::string oName = "";

		std::cout << "이름 입력 : ";
		std::getline(std::cin, oName);

		int nResult = a_pManager->FindMember(oName);

		// 회원이 없을 경우
		if(nResult < 0)
		{
			std::cout << oName << " 은(는) 존재하지않습니다.\n";
			return;
		}

		a_pManager->RemoveMember(oName);
		std::cout << oName << " 을(를) 제거했습니다.\n";
	}

	void SearchMember_T01(CManager_Member_T01* a_pManager)
	{ 
		std::string oName = "";

		std::cout << "이름 입력 : ";
		std::getline(std::cin, oName);

		int nResult = a_pManager->FindMember(oName);

		// 회원이 없을 경우
		if(nResult < 0)
		{
			std::cout << oName << " 은(는) 존재하지않습니다.\n";
			return;
		}

		std::cout << "=====> 회원 정보 <=====\n";
		a_pManager->SearchMember(oName);
	}

	void PrintMembers_All_T01(CManager_Member_T01* a_pManager)
	{ 
		std::cout << "=====> 모든 회원 정보 <=====\n";
		a_pManager->ShowMembers_All();
	}
}
