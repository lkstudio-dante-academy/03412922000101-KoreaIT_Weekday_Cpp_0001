#include "T01Training_04.h"
#include "CShape_T04.h"
#include "CCanvas_T04.h"

namespace T01Training
{
	/** 메뉴를 출력한다 */
	static void PrintMenu_T04(void);

	/** 도형을 추가한다 */
	static void AddShape_T04(EMenu_T04 a_eMenu);

	/** 모든 도형을 그린다 */
	static void DrawShapes_All_T04(void);

	/** 도형을 생성한다 */
	static std::shared_ptr<CShape_T04> CreateShape_T04(EMenu_T04 a_eMenu);

	int T01Training_04(int argc, char* args[])
	{
		do
		{
			PrintMenu_T04();

			int nMenu = 0;
			std::cin >> nMenu;

			auto eMenu = (EMenu_T04)(nMenu - 1);

			// 종료 일 경우
			if(eMenu == EMenu_T04::EXIT)
			{
				break;
			}

			switch(eMenu)
			{
				case EMenu_T04::ADD_LINE:
				case EMenu_T04::ADD_TRIANGLE:
				case EMenu_T04::ADD_RECTANGLE:
					AddShape_T04(eMenu);
					break;

				case EMenu_T04::DRAW_SHALES_ALL:
					DrawShapes_All_T04();
					break;
			}

			std::cout << std::endl;
		} while(true);

		std::cout << "프로그램을 종료합니다.\n";
		return 0;
	}

	void PrintMenu_T04(void)
	{
		std::cout << "=====> 메뉴 <=====\n";
		std::cout << "1. 선 추가\n";
		std::cout << "2. 삼각형 추가\n";
		std::cout << "3. 사각형 추가\n";
		std::cout << "4. 모든 도형 그리기\n";
		std::cout << "5. 종료\n";

		std::cout << "\n선택 : ";
	}

	void AddShape_T04(EMenu_T04 a_eMenu)
	{
		auto oShape_Ptr = CreateShape_T04(a_eMenu);
		CCanvas_T04::GetInst()->AddShape(oShape_Ptr);

		std::string oColor = oShape_Ptr->GetStr_Color();
		std::string oShape = oShape_Ptr->GetStr_Shape();

		std::cout << oColor << " " << oShape << "을 추가했습니다.\n";
	}

	void DrawShapes_All_T04(void)
	{
		CCanvas_T04::GetInst()->DrawShapes_All();
	}

	std::shared_ptr<CShape_T04> CreateShape_T04(EMenu_T04 a_eMenu)
	{
		std::random_device oRandom;

		std::uniform_int_distribution<int> oUniform((int)EColor_T04::RED, 
			(int)EColor_T04::BLUE);

		auto eColor = (EColor_T04)oUniform(oRandom);

		switch(a_eMenu)
		{
			case EMenu_T04::ADD_LINE:
				return std::make_shared<CLine_T04>(eColor);

			case EMenu_T04::ADD_TRIANGLE:
				return std::make_shared<CTriangle_T04>(eColor);

			case EMenu_T04::ADD_RECTANGLE:
				return std::make_shared<CRectangle_T04>(eColor);
		}

		return nullptr;
	}
}
