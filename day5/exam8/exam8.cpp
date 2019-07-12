// exam8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <windows.h>

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csblnfo;

	if (GetConsoleScreenBufferInfo(hConsole, &csblnfo) == 0)
	{
		printf_s("스크린 버퍼를 받지 못했습니다. \n");
	}
	else
	{
		WORD wOldColor = csblnfo.wAttributes;
		SetConsoleTextAttribute(hConsole, 0x0c);// 0000 1100 // Red
		printf_s("hello \n");
		SetConsoleTextAttribute(hConsole, 0x0a);// 0000 1010 // Green
		printf_s("hello \n");
		SetConsoleTextAttribute(hConsole, 0x09);// 0000 1001 // Blue
		printf_s("hello \n");
		SetConsoleTextAttribute(hConsole, 0xfc);// 1111 1100 // Whit Red
		printf_s("hello \n");
		SetConsoleTextAttribute(hConsole, 0xf4);// 1111 0100 // Whit DRed
		printf_s("hello \n");

		SetConsoleTextAttribute(hConsole, wOldColor);
	}
}
