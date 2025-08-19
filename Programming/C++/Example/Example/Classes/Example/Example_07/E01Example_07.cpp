#include "E01Example_07.h"

namespace E01Example
{
	/** 람다를 반환한다 */
	std::function<void(void)> GetLambda_E07(int a_nValA, int a_nValB);

	int E01Example_07(int argc, char* args[])
	{
		int nValA = 0;
		int nValB = 0;

		std::cout << "=====> 람다 - A (호출 전) <=====\n";
		std::cout << "변수 A : " << nValA << std::endl;
		std::cout << "변수 B : " << nValB << std::endl;

		/*
		* mutable 키워드란?
		* - 람다 내부에서 값으로 캡처한 외부 변수를 수정 할 수 있도록 하는 키워드를 의미한다.
		* (+ 즉, 기본적으로 값으로 캡처한 외부 변수는 상수로 캡처하기 때문에 람다 내부에서
		* 수정하는 것이 불가능하다는 것을 알 수 있다.)
		*/
		auto oLambdaA = [nValA, &nValB](void) mutable -> void
		{
			nValA = 10;
			nValB = 20;
		};

		oLambdaA();

		std::cout << "\n=====> 람다 - A (호출 후) <=====\n";
		std::cout << "변수 A : " << nValA << std::endl;
		std::cout << "변수 B : " << nValB << std::endl;

		std::cout << "\n=====> 람다 - B <=====\n";

		auto oLambdaB = GetLambda_E07(10, 20);
		oLambdaB();

		return 0;
	}

	std::function<void(void)> GetLambda_E07(int a_nValA, int a_nValB)
	{
		return [a_nValA, &a_nValB](void) -> void
		{
			std::cout << "외부 변수 A : " << a_nValA << std::endl;
			std::cout << "외부 변수 B : " << a_nValB << std::endl;
		};
	}
}
