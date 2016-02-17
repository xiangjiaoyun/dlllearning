#ifndef _MYDLL_H
#define _MYDLL_H

#ifdef MYDLL_EXPORTS
#define MYDLL _declspec(dllexport)
#else
#define MYDLL _declspec(dllimport)
#endif

MYDLL int Add(int a, int b);

#endif