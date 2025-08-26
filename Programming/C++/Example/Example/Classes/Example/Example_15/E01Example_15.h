#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 형변환 연산자 (Type Casting Operator) 란?
* - 데이터를 해석하는 방법을 바꾸는 연산자를 의미한다.
*
* C++ 은 C 를 포함하고 있기 때문에 C 의 형변환 연산자를 사용하는 것이 가능하지만
* C 의 형변환 연산자는 강력하기 때문에 원치 않는 결과를 만들 수 있는 확률이 증가한다. (+ 즉,
* 잘못된 형변환에 의해 프로그램이 오작동 할 수 있다는 것을 의미한다.)
*
* C++ 형변환 연산자 종류
* - static_cast					<- 암시적 형변환 지원
* - dynamic_cast				<- 안전한 다운 캐스팅 지원
* - reinterpret_cast			<- 정수 <-> 포인터 간에 형변환 지원
* - const_cast					<- 객체의 상수성 제거 지원
*
* 위와 같이 C++ 형변환 연산자는 상황에 따라 사용 할 수 있도록 다양한 종류를 지원한다는 것을
* 알 수 있다.
*/
namespace E01Example
{
	/** Example 15 */
	int E01Example_15(int argc, char* args[]);
}
