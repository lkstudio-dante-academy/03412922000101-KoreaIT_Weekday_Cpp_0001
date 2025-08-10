#pragma once

#include "../../../Classes/Global/Define/KDefine+Global.h"

/*
* namespace 키워드란?
* - 이름이 명시 된 지역 (영역) 을 선언하는 역할을 수행하는 키워드를 의미한다.
* 
* namespace 키워드로 선언 된 지역에는 함수 선언 등을 하는 것이 가능하며 필요에 따라 
* 네임 스페이스 하위에 새로운 네임 스페이스를 선언하는 것이 가능하다.
* 
* Ex)
* namespace A
* {
*		namespace B
*		{
*			void SomeFunc(void)
*			{
*				// Do Something
*			}
*		}
* }
* 
* A::B::SomeFunc();			<- 네임 스페이스 B 하위에 있는 SomeFunc 함수 호출
* 
* 위와 같이 네임 스페이스는 중첩으로 선언하는 것이 가능하다. (+ 즉, 네임 스페이스를 활용하면
* 연관 된 기능 들을 네임 스페이스로 묶어서 관리하는 것이 가능하다.)
* 
* :: (범위 지정 연산자) 란?
* - 특정 지역 하위에 접근하는 역할을 수행한다. (+ 즉, 범위 지정 연산자를 활용하면
* 네임 스페이스 하위에 존재하는 함수 등에 접근하는 것이 가능하다.)
*/
namespace E01Example
{
	/** Example 1 */
	int E01Example_01(int argc, char* args[]);
}
