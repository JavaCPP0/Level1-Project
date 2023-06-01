#include <iostream>
#include "BankingSystemFunc.h"

using namespace std;

typedef struct Account
{
	char name[50];
	int ID;
	int money;
}Account;

Account Acc[100];
int AccNum=0;

enum{MAKE=1,DEPOSIT,WITHDRAW,INQURE,EXIT};

void ShowMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1.계좌개설" << endl;
	cout << "2.입금" << endl;
	cout << "3.출금" << endl;
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

	for (i = 0; i < AccNum; i++)
	{
		if (Acc[i].ID == ID)
		{
			Acc[i].money += Dmoney;
			cout << "[입	금]" << endl;
			cout << "ID: " << Acc[i].ID << endl;
			cout << "입금액: "<< Dmoney << endl;
			cout << "잔액: " << Acc[i].money << endl;
			break;
		}
	}

}

void WithdrawMoney()
{
	int ID, i;
	int Wmoney;
	cout << "ID를 입력하세요(숫자만)" << endl;
	cin >> ID;
	cout << "출금할 금액을 입력하세요." << endl;
	cin >> Wmoney;

	for (i = 0; i < AccNum; i++)
	{
		if (Acc[i].ID == ID)
		{
			Acc[i].money -= Wmoney;
			cout << "[출	금]" << endl;
			cout << "ID: " << Acc[i].ID << endl;
			cout << "출금액: " << Wmoney << endl;
			cout << "잔액: " << Acc[i].money << endl;
			break;
		}
	}
}

void ShowAllAccInfo()
{
	for (int i = 0; i < AccNum; i++)
	{
		cout <<"ID: " << Acc[i].ID << endl;
		cout <<"Name: " << Acc[i].name << endl;
		cout << "Money: " << Acc[i].money << endl << endl;
	}
}

