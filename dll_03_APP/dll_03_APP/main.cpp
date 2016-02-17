#include <stdio.h>
#include <stdlib.h>

//使用库
#pragma comment(lib, "my.lib")

#define MYDLL _declspec(dllimport)
MYDLL int* MyAlloc(int size);
MYDLL void MyFree(int *p);

int main()
{
	int *p = MyAlloc(4);
	for (int i = 0; i < 4; i++) {
		printf("%d \n", p[i]);
	}
	MyFree(p);
	//free(p);这是不对的！
	getchar();
	return 0;
}