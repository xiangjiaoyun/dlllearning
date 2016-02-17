#include <stdio.h>
#include <stdlib.h>

#define MYDLL _declspec(dllexport)

MYDLL int* MyAlloc(int size)
{
	int* p = (int*) malloc(size*sizeof(int));
	for(int i=0; i < size; i++)
	{
		p[i] = i;
	}
	return p;
}

MYDLL void MyFree(int *p)
{
	free(p);
}