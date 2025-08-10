#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* shared_ptr 이란?
* - C++ 11 버전 이후부터 사용 가능한 스마트 포인터로서 레퍼런스 카운팅 방식으로 메모리를 관리하는 
* 스마트 포인터를 의미한다.
* 
* shared_ptr 은 레퍼런스 카운팅 방식으로 동작하기 때문에 소유권을 이전하는 방식으로 동작하는
* 다른 스마트 포인터와는 달리 특정 메모리를 여러 스마트 포인터가 동시에 참조하는 것이 가능하다.
* 
* Ex)
* std::shared_ptr<int> oVal_PtrA(new int(0));
* std::shared_ptr<int> oVal_PtrB = oVal_PtrA;
* 
* *oVal_PtrA = 10;
* *oVal_PtrB = 20;
* 
* std::cout << *oVal_PtrA << std::endl;			<- "20" 출력
* std::cout << *oVal_PtrB << std::endl;			<- "20" 출력
* 
* 위와 같이 shared_ptr 은 레퍼런스 카운팅 방식으로 동작하기 때문에 같은 대상을 참조하는 것이
* 가능하다.
* 
* 순환 참조 (Circular Reference) 란?
* - shared_ptr 로 관리 되는 대상이 서로를 참조하고 있는 구조를 의미한다.
* 
* 순환 참조가 발생하면 레퍼런스 카운팅이 0 이하로 떨어지지 않기 때문에 이는 결국 메모리 릭으로
* 이어진다. (+ 즉, 메모리 해제가 제대로 이루어지지 않는다는 것을 알 수 있다.)
* 
* Ex)
* struct STSomeStructA
* {
*		std::shared_ptr<struct STSomeStructB> m_oPtr;
* };
* 
* struct STSomeStructB
* {
*		std::shared_ptr<struct STSomeStructA> m_oPtr;
* };
* 
* std::shared_ptr<STSomeStructA> oPtrA(new STSomeStructA());
* std::shared_ptr<STSomeStructB> oPtrB(new STSomeStructB());
* 
* oPtrA.m_oPtr = oPtrB;			<- oPtrA 참조 대상의 레퍼런스 카운트 2
* oPtrB.m_oPtr = oPtrA;			<- oPtrB 참조 대상의 레퍼런스 카운트 2
* 
* 위와 같이 oPtrA 와 oPtrB 가 참조하는 대상은 서로를 참조함으로서 레퍼런스 카운트가 서로 2 가
* 되었으며 이로 인해 oPtrA 와 oPtrB 가 레퍼런스 카운트를 감소 시킨다고 하더라도 
* 레퍼런스 카운트는 1 이 되기 때문에 결과적으로 메모리 해제가 일어나지 않는다는 것을 알 수 있다.
* 
* 따라서 shared_ptr 로 관리 되는 대상이 서로를 참조 할 경우 순환 참조가 발생하지 않도록 한쪽을
* weak_ptr 로 참조해야한다. (+ 즉, weak_ptr 은 shared_ptr 을 보조하는 스마트 포인터이며
* shared_ptr 과는 달리 레퍼런스 카운트를 증가 시키지 않는다.)
* 
* Ex)
* struct STSomeStructA
* {
*		std::weak_ptr<struct STSomeStructB> m_oPtr;
* };
*
* struct STSomeStructB
* {
*		std::shared_ptr<struct STSomeStructA> m_oPtr;
* };
*
* std::shared_ptr<STSomeStructA> oPtrA(new STSomeStructA());
* std::shared_ptr<STSomeStructB> oPtrB(new STSomeStructB());
*
* oPtrA.m_oPtr = oPtrB;			<- oPtrA 참조 대상의 레퍼런스 카운트 2
* oPtrB.m_oPtr = oPtrA;			<- oPtrB 참조 대상의 레퍼런스 카운트 1
* 
* 위와 같이 weak_ptr 을 활용하면 레퍼런스 카운트가 증가 하지 않기 때문에 서로를 참조 하더라도
* 메모리가 해제 되지 않는 문제를 예방하는 것이 가능하다.
*/
namespace E01Example
{
	/** Example 6 */
	int E01Example_06(int argc, char* args[]);
}
