// exam3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

int nBuf[256];
int nLastIdex = -1;
void printData()
{
	for (int i=0; i <= nLastIdex; i++)
	{
		printf_s("%d", nBuf[i]);
	}
}
void pushData(int _data) //데이터를 맨 뒤에 추가
{
	nLastIdex++;
	nBuf[nLastIdex] = _data;
}
int popData() 
{
	int _r = -9999;
	if (nLastIdex) { printf_s("데이터가 없습니다,"); }
	else
	{
		_r = nBuf[nLastIdex];
		nLastIdex--;
	}
	return _r;
}
int deletData() //데이터를 맨 뒤에서 제거
{
	int _r = -9999;
	if (nLastIdex >= 0)
	{
		_r = nBuf[0];
		for (int i = 0; i < nLastIdex; i++)
		{
			nBuf[i] = nBuf[i + 1];
		}
		nLastIdex--;
	}
	return _r;
}
void insertData(int _data) //데이터를 맨 앞에서 추가
{
	if (nLastIdex >= 0)
	{
		for (int i = nLastIdex; i >= 0; i--)
		{
			nBuf[i + 1] = nBuf[i];
		}
	}
	nBuf[0] = _data;
	nLastIdex++;
}
void insertToData(int _data, int nIndex ) //데이터를 맨 앞에서 추가
{
	if (nLastIdex >= 0)
	{
		for (int i = nLastIdex; i >= nIndex; i--)
		{
			nBuf[i + 1] = nBuf[i];
		}
	}
	nBuf[nIndex] = _data;
	nLastIdex++;
}
int delToData(int nIndex)
{
	int _r = nBuf[nIndex];
	for (int i = nIndex; i < nLastIdex; i++)
	{
		nBuf[i] = nBuf[i + 1];
	}
	nLastIdex--;
	return _r;
}

int main()
{
	int _bLoop = 1;
	while (_bLoop)
	{
		int _cmd; printf_s("Cmd>");  scanf_s("%d", &_cmd);
		switch (_cmd)
		{
		case 0: _bLoop = 0; printf_s("종료합니다.\n"); break;
		case 1: {int _num; printf_s("input num =>");  scanf_s("%d", &_num); pushData(_num); }break; //push
		case 2: {printf_s("pop : %d\n", popData()); }break; //pop
		case 3: printData(); break; //show
		case 4: {printf_s("del : %d\n", deletData());}break;
		case 5: {int _num; printf_s("input num =>"); scanf_s("%d", &_num); insertData(_num); }break;
		case 6: {int _num, _index; printf_s("input num =>"); scanf_s("%d %d", &_num, &_index); }
		case 7: {int nIndex; scanf_s("%d", &nIndex); printf_s("Del : %d \n", delToData(nIndex)); }
		default:
			break;
		}
	}

	
}

