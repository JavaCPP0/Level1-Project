/*
기능1.계좌개설
기능2.입금
기능3.출금
기능4.전체고객 잔액조회

예시
-----Menu-----
1.계좌개설
2.입금
3.출금
4.계좌정보 전체 출력
5.프로그램 종료
선택:2

[입		금]
계좌ID:115
입금액:70
입금완료


-----Menu-----
1.계좌개설
2.입금
3.출금
4.계좌정보 전체 출력
5.프로그램 종료
선택:4

계좌ID:155
이 름:이우석
잔액:15070
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