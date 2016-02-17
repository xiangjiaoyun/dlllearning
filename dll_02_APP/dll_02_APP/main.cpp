#include <stdio.h>
//#define MYDLL _declspec(dllimport)

#pragma comment(lib,"my.lib");

_declspec(dllimport) int MyGet();
_declspec(dllimport) void MySet(int n);

int main()
{
	int value = MyGet();
	printf("value: %d \n", value);

	MySet (value + 123);

	value = MyGet();
	printf("value: %d \n", value);

	getchar();
	return 0;
}