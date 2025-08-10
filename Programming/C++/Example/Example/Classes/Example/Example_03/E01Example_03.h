#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* new 키워드란?
* - 동적 할당을 지원하는 키워드를 의미한다. (+ 즉, new 키워드를 활용하면 힙 영역에 메모리를
* 할당하는 것이 가능하다.)
* 
* C++ 은 C 를 포함하고 있기 때문에 C 의 동적 할당 함수 (+ Ex. malloc 함수 등등...) 를 
* 사용하는 것이 가능하지만 new 키워드를 활용하면 좀 더 직관적으로 메모리를 힙 영역에 할당하는 것이
* 가능하다.
* 
* Ex)
* int* pnVal = new int(0);			<- 힙 영역에 4 바이트를 할당 후 int 형 포인터 반환
* *pnVal = 10;
* 
* 위와 같이 new 키워드를 활용하면 동적 할당 함수를 사용하는 것 보다 좀 더 직관적으로 메모리를
* 힙 영역에 할당하는 것이 가능하다.
* 
* C++ 은 C 와 마찬가지로 힙 영역에 할당 된 메모리는 사용자 (프로그래머) 가
* 관리하는 언어이기 때문에 new 키워드를 통해 할당 된 메모리 또한 사용을 완료 했을 경우 반드시
* 해제 할 필요가 있으며 이는 delete 키워드를 사용하는 것으로 처리 가능하다. (+ 즉, 
* new 키워드를 통해 동적 할당 된 메모리는 delete 키워드로 해제해야한다는 것을 알 수 있다.)
* 
* Ex)
* int* pnVal = new int(0);
* int* pnValues = new int[5];
* 
* delete pnVal;
* delete[] pnValues;
* 
* 위와 같이 new 키워드를 통해 동적 할당 된 메모리는 delete 키워드를 통해 해제가 가능하며
* new[] 키워드를 통해 동적 할당 된 메모리는 delete[] 키워드를 통해 해제가 가능하다. (+ 즉,
* new/delete, new[]/delete[] 와 같이 new 키워드는 짝을 맞춰 사용해야한다는 것을 알 수 있다.)
*/
namespace E01Example
{
	/** Example 03 */
	int E01Example_03(int argc, char* args[]);
}
