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
	cout << "1.���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3,���" << endl;
	cout << "4.�������� ��ü ���" << endl;
	cout << "5.���α׷� ����" << endl;
}

void MakeAccount()
{
	cout << "�̸��� �Է��ϼ���" << endl;
	cin>>Acc[AccNum].name;

	cout << "ID�� �Է��ϼ���(���ڸ�)" << endl;
	cin >> Acc[AccNum].ID;

	Acc[AccNum].money = 0;
	++AccNum;
}

void DepositMoney()
{
	int ID,i;
	int Dmoney;
	cout << "ID�� �Է��ϼ���(���ڸ�)" << endl;
	cin >> ID;
	cout << "�Ա��� �ݾ��� �Է��ϼ���." << endl;
	cin >> Dmoney;

	for (i = 0; i < 100; i++)
	{
		if (Acc[i].ID == ID)
		{
			Acc[i].money += Dmoney;
			cout << "[�ԱݿϷ�]" << endl;
			cout << "�ܾ�: " << Acc[i].money << endl;
			break;
		}

		if (i == 100)
		{
			cout << "��ȿ�������� ID�Դϴ�." << endl;
		}
	}

}

void WithdrawMoney()
{

}

void ShowAllAccInfo()
{
	
}

