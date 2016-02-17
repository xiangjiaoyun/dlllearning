#include <stdio.h>
#include "MyObject.h"

#pragma comment(lib, "my.lib")

int main()
{
	MyObject obj(123);
	obj.Print();

	getchar();
	return 0;
}