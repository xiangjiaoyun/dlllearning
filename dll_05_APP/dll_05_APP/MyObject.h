#ifndef _MY_OBJECT_H
#define _MY_OBJECT_H

#ifdef MYDLL_EXPORTS
#define MYDLL _declspec(dllexport)
#else
#define MYDLL _declspec(dllimport)
#endif

class MYDLL MyObject
{
public:
	MyObject(int v);
	void Print();

private:
	int value;
};

#endif