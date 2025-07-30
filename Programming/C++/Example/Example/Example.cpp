#define EXAMPLE
#define TRAINING

#if defined EXAMPLE
#include "Classes/Example/Example_01/E01Example_01.h"
#include "Classes/Example/Example_02/E01Example_02.h"
#elif defined TRAINING
#include "Classes/Training/Training_01/T01Training_01.h"
#include "Classes/Training/Training_02/T01Training_02.h"
#endif // #if defined EXAMPLE

/** 메인 함수 */
int main(int argc, char* args[])
{
	srand((unsigned int)time(nullptr));

#if defined EXAMPLE
	E01Example::E01Example_01(argc, args);
	//E01Example::E01Example_02(argc, args);
#elif defined TRAINING
	T01Training::T01Training_01(argc, args);
	//T01Training::T01Training_02(argc, args);
#endif // #if defined EXAMPLE

	return 0;
}
