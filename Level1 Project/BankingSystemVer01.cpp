/*
���1.���°���
���2.�Ա�
���3.���
���4.��ü�� �ܾ���ȸ

����
-----Menu-----
1.���°���
2.�Ա�
3.���
4.�������� ��ü ���
5.���α׷� ����
����:2

[��		��]
����ID:115
�Աݾ�:70
�ԱݿϷ�


-----Menu-----
1.���°���
2.�Ա�
3.���
4.�������� ��ü ���
5.���α׷� ����
����:4

����ID:155
�� ��:�̿켮
�ܾ�:15070
*/

#include <iostream>
#include "BankingSystemFunc.h"

using namespace std;


int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();
		cin >> choice;
		switch (choice) {
			case 1:
				MakeAccount();
				break;
			case 2:
				DepositMoney();
				break;
			case 3:
				WithdrawMoney();
				break;
			case 4:
				ShowAllAccInfo();
				break;
			case 5:
				return 0;
				break;
		}
			

	}

	return 0;
}