#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 접근 제어 지시자 (or 한정자) 란?
* - 클래스 내부에 정의 된 멤버에 대한 접근 범위를 제한하는 기능을 의미한다. (+ 즉, 
* 접근 제어 지시자를 활용하면 객체가 지니고 있는 멤버를 외부로부터 보호하는 것이 가능하다.)
* 
* C++ 접근 제어 지시자 종류
* - public				<- 클래스 내부와 외부에서 접근 가능
* - protected			<- 클래스 내부와 자식 클래스에서 접근 가능
* - private				<- 클래스 내부에서 접근 가능
* 
* 위와 같이 접근 제어 지시자는 여러 종류가 존재하며 해당 지시자를 클래스에 명시함으로서 
* 클래스의 멤버에 대한 접근 범위를 제한하는 것이 가능하다.
* 
* 만약 접근 제어 지시자를 명시하지 않을 경우 자동으로 private 수준이 적용 된다. (+ 즉, 클래스는
* private 수준이 기본이라는 것을 알 수 있다.)
* 
* 일반적으로 클래스를 정의 할 때 멤버 변수는 private 수준으로 명시하고 멤버 함수는 public 수준으로
* 명시한다. (+ 즉, 객체가 지니고 있는 데이터는 외부에서 함부로 접근 못하도록 제한하는 것이
* 일반적인 구조라는 것을 알 수 있다.)
* 
* 따라서 private 수준으로 보호 되고 있는 멤버 변수가 지닌 데이터를 외부에서 접근하고 싶다면
* 접근자 함수를 정의하는 것이 일반적이다. (+ 즉, 접근자 함수를 정의함으로서 외부에서 간접적으로
* 멤버 변수에 접근하는 것이 가능하다.)
* 
* Ex)
* class CSomeClass
* {
* public:
* 
*		int GetVal(void)
*		{
*			return m_nVal;
*		}
* 
*		void SetVal(int a_nVal)
*		{
*			m_nVal = a_nVal;
*		}
* };
* 
* CSomeClass oSomeObj;
* oSomeObj.SetVal(10);
* 
* std::cout << oSomeObj.GetVal() << std::endl;
* 
* 위와 같이 접근자 함수 Getter 와 Setter 를 정의함으로서 클래스 외부에서 멤버 변수를 간접적으로
* 제어하는 것이 가능하다. (+ 즉, 클래스 외부 멤버 변수에 할당 된 데이터를 반환하는 함수를
* Getter 라고 하고 클래스 외부에서 전달 된 데이터를 멤버 변수에 할당하는 함수를 Setter 라고 한다.)
*/
namespace E01Example
{
	/** Example 9 */
	int E01Example_09(int argc, char* args[]);
}
