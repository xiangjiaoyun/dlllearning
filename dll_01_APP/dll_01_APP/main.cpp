#include <stdio.h>
//#include <stdlib.h>

//使用库

#pragma comment(lib, "my.lib");

//声明此函数需从dll中导入
_declspec(dllimport) int Add(int a, int b);

int main()
{
	int result = Add(10, 11);
	printf("result: %d \n", result);
	
	getchar();
	//system("pause");
	return 0;
}