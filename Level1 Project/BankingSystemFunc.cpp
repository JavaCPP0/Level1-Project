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

	cout << "ID�� �Է��ϼ���" << endl;
	cin >> Acc[AccNum].ID;

	Acc[AccNum].money = 0;
	++AccNum;
}

void DepositMoney()
{
	
	while (1)
	{
		int ID;
		cout << "�Ա��� ������ ID�� �Է��ϼ���" << endl;
		cin >> ID;

		if (Acc[ID].name == NULL)
			cout << "�������� �ʴ� �����Դϴ�.�ٽ� �Է��ϼ���" << endl;

		else
		{
			cout << "�Ա��� �ݾ��� �Է��ϼ���" << endl;
			cin >> Acc[ID].money;
			cout << "�ԱݿϷ�" << endl;
			break;
		}
	}
}

