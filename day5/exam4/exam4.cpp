// exam4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

int main()
{
	int _input;
	printf_s("나이를 적어보세요 : \n");
	scanf_s("%d", &_input);

	if (_input <= 6) {
		printf_s("그냥 들어와, 아가야. \n");
	}
	if (_input >=70) {
		printf_s("무료입장입니다, 어르신. \n");
	}
	if (_input > 6 && _input <70) {
		printf_s("입장료는 3,000원입니다. \n");
	}
	return 0;
}

