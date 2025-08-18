#include "E01Example_15.h"
#include "CBase_E15.h"
#include "CDerived_E15.h"

namespace E01Example
{
	int E01Example_15(int argc, char* args[])
	{
		CBase_E15* pBaseA = new CBase_E15(10, 3.14f);
		CBase_E15* pBaseB = new CDerived_E15(20, 3.14f, "Hello, World!");

		return 0;
	}
}
