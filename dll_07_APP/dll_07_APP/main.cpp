#include <stdio.h>

//����windows��ͷ�ļ�
#include <winsock2.h>
#include <windows.h>

int main()
{
	HINSTANCE handle = LoadLibrary("my.dll");
	if(handle)
	{
		//����Ҫ�ҵĺ���ԭ��
		typedef int (*DLL_FUNCTION_ADD) (int, int);

		//�ҵ�Ŀ�꺯���ĵ�ַ
		DLL_FUNCTION_ADD dll_func = (DLL_FUNCTION_ADD)GetProcAddress(handle, "Add");
		if(dll_func)
		{
			//���øú���
			int result = dll_func(10, 11);
			printf("result: %d \n", result);
		}
	}

	//ж��
	FreeLibrary(handle);
	
	getchar();
	return 0;
}