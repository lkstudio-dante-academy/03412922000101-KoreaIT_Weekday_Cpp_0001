#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* C++ 클래스 템플릿 정의 방법
* - 템플릿 형식 인자 + class + 클래스 이름 + 클래스 멤버 (+ 변수, 함수 등등...)
* 
* Ex)
* template<typename T>
* class CSomeClass
* {
* public:
* 
*		void SomeFunc(T a_tVal)
*		{
*			// Do Something
*		}
* 
* private:
*
*		T m_tVal;
* };
* 
* CSomeClass<int> oSomeObjA;
* CSomeClass<std::string> oSomeObjB;
* 
* 위와 같이 클래스 템플릿은 함수 템플릿과 달리 템플릿 형식 인자의 자료형을 명시적으로 
* 지정해줘야한다. (+ 즉, 템플릿 형식 인자의 자료형을 지정하지 않으면 컴파일 에러가 발생한다는 것을 
* 알 수 있다.)
*/
namespace E01Example
{
	/** Example 18 */
	int E01Example_18(int argc, char* args[]);
}
