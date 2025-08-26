#pragma once

#include "../../../Classes/Global/Define/KDefine+Global.h"

/*
* C++ 이란?
* - 컴파일 방식으로 동작하는 고수준 프로그래밍 언어로서
* 객체 지향 프로그래밍 (Object Oriented Programming) 패러다임을 지원한다.
*
* C++ 은 C 를 포함하고 있기 때문에 C 에서 지원하는 기능을 대부분 사용하는 것이 가능하다. (+ 즉,
* C++ 은 C 가 지원하는 기능에서 객체 지향 프로그래밍과 관련 된 기능이 추가 된
* 프로그래밍 언어라는 것을 알 수 있다.)
*/

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
