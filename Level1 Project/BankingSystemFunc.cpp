#include <iostream>
#include "BankingSystemFunc.h"

using namespace std;

typedef struct Account
{
	char name[50];
	int ID;
	int money;
};

Account Acc[100];
int AccNum=0;

void ShowMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1.게좌개설" << endl;
	cout << "2.입금" << endl;
	cout << "3,출금" << endl;
	cout << "4.계좌정보 전체 출력" << endl;
	cout << "5.프로그램 종료" << endl;
}

void MakeAccount()
{
	cout << "이름을 입력하세요" << endl;
	cin>>Acc[AccNum].name;

	cout << "ID를 입력하세요" << endl;
	cin >> Acc[AccNum].ID;

	Acc[AccNum].money = 0;
	++AccNum;
}

void DepositMoney()
{
	
	while (1)
	{
		int ID;
		cout << "입금할 계좌의 ID를 입력하세요" << endl;
		cin >> ID;

		if (Acc[ID].name == NULL)
			cout << "존재하지 않는 계좌입니다.다시 입력하세요" << endl;

		else
		{
			cout << "입금할 금액을 입력하세요" << endl;
			cin >> Acc[ID].money;
			cout << "입금완료" << endl;
			break;
		}
	}
}

