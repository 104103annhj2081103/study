#include <iostream>
#include "..//..//..///cstudy/engine/tge.h"

void addInt(int *a,int *b)
{
	*a = *a + 10;
}

void sample2()
{
	puts("sample2....");

	int a = 1;
	int b = 1;
	addInt(&a,&b);

	printf_s("%d %d\n", a, b);
}