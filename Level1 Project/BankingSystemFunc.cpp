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

enum{MAKE=1,DEPOSIT,WITHDRAW,INQURE,EXIT};

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

	cout << "ID를 입력하세요(숫자만)" << endl;
	cin >> Acc[AccNum].ID;

	Acc[AccNum].money = 0;
	++AccNum;
}

void DepositMoney()
{
	int ID,i;
	int Dmoney;
	cout << "ID를 입력하세요(숫자만)" << endl;
	cin >> ID;
	cout << "입금할 금액을 입력하세요." << endl;
	cin >> Dmoney;

	for (i = 0; i < 100; i++)
	{
		if (Acc[i].ID == ID)
		{
			Acc[i].money += Dmoney;
			cout << "[입금완료]" << endl;
			cout << "잔액: " << Acc[i].money << endl;
			break;
		}

		if (i == 100)
		{
			cout << "유효하지않은 ID입니다." << endl;
		}
	}

}

void WithdrawMoney()
{

}

void ShowAllAccInfo()
{
	
}

