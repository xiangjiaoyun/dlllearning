#include <stdio.h>

#define MYDLL_EXPORTS
#include "mydll.h"

int Add(int a, int b)
{
	return a + b;
}