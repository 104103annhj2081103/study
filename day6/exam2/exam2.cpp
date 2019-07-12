// exam2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			printf_s("*");
		}
		printf_s("\n");
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 1+i; j++)
		{
			printf_s("*");
		}
		printf_s("\n");
	}
	return 0;
}

