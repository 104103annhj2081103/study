// exam7.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

int main()
{
	char _cmd;
	int _bLoop = 1;
	int _nMoney = 0;
	int _nMoneypower = 1;
	while (_bLoop)
	{
		printf_s("커멘드 입력(도움말 h) :");
		scanf_s("\n%c", &_cmd,sizeof(_cmd));
		switch (_cmd)
		{
		case 'q':
		{
			_bLoop = 0; printf_s("\n게임을 종료합니다. \n");
		}
			break;
		case 'h':
			{
				printf_s("m. 돈벌기 \n");
				printf_s("h. 치료하기 \n");
				printf_s("u. 사냥하기 \n");
				printf_s("g. 아이템 줍기 \n");
				printf_s("q. 나가기 \n");
             }
			    break;
		case 'g':
		{
			printf_s("곡갱이 획득 \n");
			_nMoneypower = 10;
		}
		case'm':
		{
			_nMoney = _nMoney + _nMoneypower ;
			printf_s("현재 보유금액 : %d \n",_nMoney);
		}
			default:
				break;
		}
	}
}

