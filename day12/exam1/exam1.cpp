// exam1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "..//..//..//cstudy/engine/tge.h"

struct S_GameObj
{
	char* m_szName;
	int m_nDamage;
	int m_nHitPoint;
	double m_fSpeed;
	double m_fXpos, m_fYpos;
};

int main()
{
	S_GameObj t47TankObj;
	
	char szTemp[256];
	gets_s(szTemp);
	//문자열의 길이를 구하고
	//길이 만큼 메모리 할당 후
	//문자열 대입(복사)

	int nLength = strnlen_s(szTemp,sizeof(szTemp));
	t47TankObj.m_szName = (char*)malloc(nLength + 1);
	strcpy_s(t47TankObj.m_szName, nLength + 1, szTemp);

	//t47TankObj.m_szName = (char *)malloc(32);
	//strcpy_s(t47TankObj.m_szName, 32, "playersTank");

	t47TankObj.m_nDamage = 15;
	t47TankObj.m_fSpeed = 5.7;
	t47TankObj.m_nHitPoint = 100;
	t47TankObj.m_fXpos = 0;
	t47TankObj.m_fYpos = 0;

	printf_s("Name : %s\n", t47TankObj.m_szName);
	printf_s("Speed : %f\n", t47TankObj.m_fSpeed);
	printf_s("Damage : %d\n", t47TankObj.m_nDamage);
	printf_s("HitPoint : %d\n", t47TankObj.m_nHitPoint);
	printf_s("Xpos : %f\n", t47TankObj.m_fXpos);
	printf_s("Ypos : %f\n", t47TankObj.m_fYpos);


	free(t47TankObj.m_szName);

	return 0;

}

