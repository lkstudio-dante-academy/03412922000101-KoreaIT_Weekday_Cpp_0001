#include "E01Example_04.h"

namespace E01Example
{
	int E01Example_04(int argc, char* args[])
	{
		int anValues[10] = { 0 };

		/*
		* random_device 클래스란?
		* - 난수를 생성하는 역할을 수행하는 클래스를 의미한다. (+ 즉,
		* random_device 클래스를 활용하면 rand 함수를 사용하는 것 보다 좀 더 균등하게 난수를
		* 생성하는 것이 가능하다.)
		*
		* random_device 는 완전한 난수를 생성하기 위해 내부적으로 시드 값을 랜덤하게 설정하는
		* 특징이 존재한다. (+ 즉, random_device 객체를 생성 할 때마다 생성 되는 난수 패턴이
		* 바뀐다는 것을 알 수 있다.)
		*
		* uniform_int_distribution 클래스란?
		* - 특정 범위 사이의 난수를 추출하는 역할을 수행하는 클래스를 의마한다. (+ 즉,
		* uniform_int_distribution 클래스를 활용하면 rand 함수를 사용하는 것 보다 좀 더 쉽게
		* 난수를 추출하는 것이 가능하다.)
		*/
		std::random_device oRandom;
		std::uniform_int_distribution<int> oUniform(1, 99);

		/*
		* 아래와 같이 auto 키워드를 활용하면 자료형을 명시하지 않고 지역 변수를 선언하는 것이
		* 가능하다.
		*/
		for(auto& rnVal : anValues)
		{
			rnVal = oUniform(oRandom);
		}

		std::cout << "=====> 배열 <=====\n";

		for(const auto& rnVal : anValues)
		{
			std::cout << rnVal << ", ";
		}

		std::cout << std::endl;
		return 0;
	}
}
