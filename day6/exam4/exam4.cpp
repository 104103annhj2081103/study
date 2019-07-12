// exam4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

int sumint(int num1, int num2)
{
	int num3 = num1 + num2;
	printf_s("두 수를 입력하세요 : ");
	scanf_s("%d %d\n", &num1, &num2);
	
	num3 = num1 + num2;
	
	return num3;
}

int subInt(int num1, int num2)
{
	int num3 = num1 - num2;
	return num3;

}
int mint(int num1, int num2)
{
	int num3 = num1 * num2;
	return num3;
}
int react(int num1, int num2)
{
	int num3 = num1 / num2;
	return num3;
}
int main()
{
	printf_s("두 수의 합은 %d입니다.\n", sumint(2, 3));
	printf_s("두 수의 합은 %d입니다.\n", sumint(3, 3));
	printf_s("두 수의 합은 %d입니다.\n", sumint(4, 3));
	printf_s("%d\n", subInt(7, 2));
	printf_s("%d\n", subInt(10, 1));
	printf_s("%d\n", subInt(6, 2));
	printf_s("%d\n", mint(4, 3));
	printf_s("%d\n", mint(7, 3));
	printf_s("%d\n", mint(9, 6)); 
	printf_s("%d\n", react(4, 2));
	printf_s("%d\n", react(9, 3));
	printf_s("%d\n", react(14, 2));

}

