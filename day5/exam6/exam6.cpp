// exam6.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

int main()
{
	char _cmd;
	int _bLoop = 1;
	while (1)
	{
		printf_s("커멘드를 입력하세요(도움말 h) : ");
		scanf_s("%c \n", &_cmd, sizeof(_cmd));

		switch (_cmd)
		{
		case 'q':
		{
			_bLoop = 0; printf_s(" 프로그램을 종료합니다. ");
		}
		break;
		case 'h':
		{
			printf_s("========= \n");
			printf_s("q : 나가기 \n");
			printf_s("c : 캐릭터 생성 \n");
			printf_s("s : 게임시작 \n");
			printf_s("i : 게임설정 \n");
			printf_s("========= \n");
		}
		}
		if (_cmd == 'q')
		{
			printf_s("프로그램을 종료합니다. ");
			break;
		}
		else if (_cmd == 'c') {
			int __cmd;
			printf_s("캐릭터를 생성합니다. \n");
			printf_s("직업을 선택하세요. \n");
			printf_s("1. 파이터 \n");
			printf_s("2. 마법사 \n");
			printf_s("3. 치료사 \n");
			scanf_s("%d\n", &__cmd);
		}

		else if (_cmd == 's') {
			int ___cmd;
			printf_s("서버를 선택하세요. \n");
			printf_s("1. 혁신도시 \n");
			printf_s("2. 만성도시 \n");
			printf_s("3. 신시가지 \n");
			scanf_s("\n%d\n", &___cmd);
			printf_s("%d 를 선택하셨습니다. \n", ___cmd);
		}
		else
		{
			printf_s("\n커멘드를 확인해주세요. \n");
		}
	}
}
