#include <stdio.h>
//#include <stdlib.h>

//ʹ�ÿ�

#pragma comment(lib, "my.lib");

//�����˺������dll�е���
_declspec(dllimport) int Add(int a, int b);

int main()
{
	int result = Add(10, 11);
	printf("result: %d \n", result);
	
	getchar();
	//system("pause");
	return 0;
}