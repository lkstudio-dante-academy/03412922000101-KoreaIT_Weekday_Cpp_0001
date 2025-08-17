#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 클래스 멤버 (Class Member) 란?
* - 객체에 종속 되는 일반적인 멤버와 달리 클래스 자체에 종속 되는 멤버를 의미한다. (+ 즉,
* 클래스 멤버는 클래스 자체에 종속 되기 때문에 객체를 생성하지 않고도 접근이 가능하다는 것을
* 알 수 있다.)
* 
* C++ 클래스 멤버 정의 방법
* - static + 자료형 + 변수 이름
* - static + 반환형 + 함수 이름 + 매개 변수 + 함수 몸체
* 
* Ex)
* class CSomeClass
* {
* public:
* 
*		static void SomeFunc(void)			<- 클래스 함수
*		{
*			// Do Something
*		}
* 
* private:
* 
*		static int m_nVal;					<- 클래스 변수 선언
* };
* 
* int CSomeClass::m_nVal = 0;				<- 클래스 변수 정의
* 
* 위와 같이 static 키워드를 활용하면 클래스 변수 or 클래스 함수를 정의하는 것이 가능하다.
* 
* 클래스 변수는 선언과 정의가 나누어져있으며 클래스 변수의 선언은 클래스 내부에 작성하고
* 클래스 변수의 정의는 클래스 외부에 작성해야한다. (+ 즉, 클래스 내부에 선언과 정의를
* 모두 작성 할 경우 컴파일 에러가 발생한다.)
* 
* 따라서 클래스 변수의 선언은 헤더 파일에 작성하고 클래스 변수의 정의는 소스 파일에 작성하는 것이
* 일반적이 구조이다. (+ 즉, 클래스 변수 정의를 헤더 파일에 작성 할 경우 중복 정의에 의해
* 컴파일 에러가 발생한다는 것을 알 수 있다.)
*/
namespace E01Example
{
	/** Example 11 */
	int E01Example_11(int argc, char* args[]);
}
