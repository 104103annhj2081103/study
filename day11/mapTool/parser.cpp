#include <iostream>
#include "../..//..//cstudy/engine/tge.h"

extern CHAR_INFO* pBackBuf;
void changeCursorColor(int nColor);
void moveCursor(int x, int y);

void parse_chgcolor(void* p0bj)
{
	changeCursorColor(
		atoi(((char(*)[64])p0bj)[1])
	);
}

void test1(void* p0bj)
{
	printf_s("test 1 %s \n", ((char(*)[64])p0bj)[1]);
}
void test2(void* p0bj)
{
	printf_s("test 2\n");
}
void test3(void* p0bj)
{
	printf_s("test 3\n");
}

void parse_moveCursor(void* p0bj)
{
	moveCursor(
		atoi(((char(*)[64])p0bj)[1]),
		atoi(((char(*)[64])p0bj)[2])
	);
}

void clearScreen(int nColor);

void parse_clear(void* pObj)
{
	clearScreen(atoi(((char(*)[64])pObj)[1]));
}

const char* nameTable[] = {
	"test1",
	"test2",
	"test3",
	"chgcolor",
	"mvCursor",
	"clear"
};

void* arrayHandlers[] = {
	test1,
	test2,
	test3,
	parse_chgcolor,
	parse_moveCursor,
	parse_clear
};

void parseCommand()
{
	for (int i = 0; i < sizeof(nameTable) / sizeof(nameTable[0]); i++)
	{
		if (strcmp(nameTable[i], TGE::g_szTokens[0]) == 0)
		{
			((void(*)(void*))arrayHandlers[i])(TGE::g_szTokens);
			break;
		}
	}
}
