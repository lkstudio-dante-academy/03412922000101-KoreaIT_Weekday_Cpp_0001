#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 연산자 오버로딩 (Operator Overloading) 이란?
* - 객체를 대상으로 연산자를 사용 할 수 있는 기능을 의미한다. (+ 즉, 연산자 오버로딩을 활용하면
* 객체를 일반적인 변수처럼 제어하는 것이 가능하다.)
* 
* 연산자 오버로딩은 함수 호출을 통해 이루어지며 연산자 오버로딩 함수는 모두 operator 로
* 시작하는 특징이 존재한다. (+ Ex. operator+, operator- 등등...)
* 
* C++ 컴파일러는 객체를 대상으로 연산자를 명시 할 경우 해당 연산자를 처리 할 수 있는 
* 연산자 오버로딩 함수를 호출한다. (+ 즉, 연산자 오버로딩을 통해 연산자에 대한 동작을
* 정의 할 수 있다는 것을 의미한다.)
* 
* C++ 연산자 오버로딩 함수 정의 방법
* - 반환형 + operator + 연산자 + 매개 변수 + 함수 몸체
* 
* Ex)
* class CSomeClass
* {
* public:
* 
*		void operator+(const CSomeClass& a_rOther)
*		{
*			// Do Something
*		}
* };
* 
* CSomeClass oSomeObjA;
* CSomeClass oSomeObjB;
* 
* oSomeObjA + oSomeObjB;			<- "operator+" 함수 호출
* 
* 위와 같이 연산자 오버로딩 함수를 정의하면 C++ 컴파일러에 의해 해당 함수가 호출 된다는 것을
* 알 수 있다. (+ 즉, 객체를 대상으로 연산자를 명시 할 경우 해당 연산자에 대응되는
* 연산자 오버로딩 함수가 호출 된다는 것을 알 수 있다.)
* 
* 또한 필요에 따라 연산자 오버로딩 함수는 전역 함수로 정의하는 것이 가능하다.
* 
* Ex)
* void operator+(const CSomeClass& a_rLhs, const CSomeClass& a_rRhs)
* {
*		// Do Something
* }
* 
* 위와 같이 연산자 오버로딩 함수는 전역 함수로 정의하는 것도 가능하다.
*/
namespace E01Example
{
	/** Example 16 */
	int E01Example_16(int argc, char* args[]);
}
