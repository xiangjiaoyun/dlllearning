#include <stdio.h>

//包含windows的头文件
#include <winsock2.h>
#include <windows.h>

int main()
{
	HINSTANCE handle = LoadLibrary("my.dll");
	if(handle)
	{
		//定义要找的函数原型
		typedef int (*DLL_FUNCTION_ADD) (int, int);

		//找到目标函数的地址
		DLL_FUNCTION_ADD dll_func = (DLL_FUNCTION_ADD)GetProcAddress(handle, "Add");
		if(dll_func)
		{
			//调用该函数
			int result = dll_func(10, 11);
			printf("result: %d \n", result);
		}
	}

	//卸载
	FreeLibrary(handle);
	
	getchar();
	return 0;
}