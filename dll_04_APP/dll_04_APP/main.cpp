#include <stdio.h>
#include "mydll.h"

#pragma comment(lib,"my.lib")

int main()
{
	int result = Add(10, 11);
	printf("result: %d \n", result);

	getchar();
	return 0;
}
