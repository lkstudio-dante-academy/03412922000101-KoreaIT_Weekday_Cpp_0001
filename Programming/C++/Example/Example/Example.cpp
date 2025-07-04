#define EXAMPLE
#define TRAINING

#include "03412922000101-KoreaIT_Weekday_Cpp_0001/Example/Example_01/E01Example_01.h"
#include "03412922000101-KoreaIT_Weekday_Cpp_0001/Example/Example_02/E01Example_02.h"

#include "03412922000101-KoreaIT_Weekday_Cpp_0001/Training/Training_01/T01Training_01.h"
#include "03412922000101-KoreaIT_Weekday_Cpp_0001/Training/Training_02/T01Training_02.h"

/** 메인 함수 */
int main(int argc, char* args[])
{
#if defined EXAMPLE
	E01Example::E01Example_01(argc, args);
	//E01Example::E01Example_02(argc, args);
#elif defined TRAINING
	T01Training::T01Training_01(argc, args);
	//T01Training::T01Training_02(argc, args);
#endif // #if defined EXAMPLE

	return 0;
}
