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
	cout << "1.���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3.���" << endl;
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

	for (i = 0; i < AccNum; i++)
	{
		if (Acc[i].ID == ID)
		{
			Acc[i].money += Dmoney;
			cout << "[��	��]" << endl;
			cout << "ID: " << Acc[i].ID << endl;
			cout << "�Աݾ�: "<< Dmoney << endl;
			cout << "�ܾ�: " << Acc[i].money << endl;
			break;
		}
	}

}

void WithdrawMoney()
{
	int ID, i;
	int Wmoney;
	cout << "ID�� �Է��ϼ���(���ڸ�)" << endl;
	cin >> ID;
	cout << "����� �ݾ��� �Է��ϼ���." << endl;
	cin >> Wmoney;

	for (i = 0; i < AccNum; i++)
	{
		if (Acc[i].ID == ID)
		{
			Acc[i].money -= Wmoney;
			cout << "[��	��]" << endl;
			cout << "ID: " << Acc[i].ID << endl;
			cout << "��ݾ�: " << Wmoney << endl;
			cout << "�ܾ�: " << Acc[i].money << endl;
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

