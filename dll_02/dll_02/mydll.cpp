#include <stdio.h>
static int value = 0;

//#define myDLL _declspec(dllexport)

_declspec(dllexport) int MyGet()
{
	printf("address: %p \n", &value);
	return value;
}

_declspec(dllexport) void MySet(int n)
{
	value = n;
}