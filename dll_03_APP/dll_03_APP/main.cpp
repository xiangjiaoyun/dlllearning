#include <stdio.h>
#include <stdlib.h>

//ʹ�ÿ�
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
	//free(p);���ǲ��Եģ�
	getchar();
	return 0;
}