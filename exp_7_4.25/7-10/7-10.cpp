//7_10.cpp
#include "account.h"
#include <iostream>
using namespace std;
int main() {
	Date date(2008, 11, 1);	//起始日期
	//建立几个账户
	SavingsAccount sa1(date, "S3755217", 0.015);
	SavingsAccount sa2(date, "02342342", 0.015);
	CreditAccount ca(date, "C5392394", 10000, 0.0005, 50);
	//11月份的几笔账目
	sa1.deposit(Date(2008, 11, 5), 5000, "salary");
	ca.withdraw(Date(2008, 11, 15), 2000, "buy a cell");
	sa2.deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
	ca.settle(Date(2008, 12, 1)); //结算信用卡
	//12月份的几笔账目
	ca.deposit(Date(2008, 12, 1), 2016, "repay the credit");
	sa1.deposit(Date(2008, 12, 5), 5500, "salary");
	
//结算所有账户
	sa1.settle(Date(2009, 1, 1));
	sa2.settle(Date(2009, 1, 1));
	ca.settle(Date(2009, 1, 1));
	//输出各个账户信息
	cout << endl;
	sa1.show(); cout << endl;
	sa2.show(); cout << endl;
	ca.show(); cout << endl;
	cout << "Total: " << Account::getTotal() << endl;
	getchar();
	return 0;
}
/*
2008-11-1       #S3755217 created
2008-11-1       #02342342 created
2008-11-1       #C5392394 created
2008-11-5       #S3755217       5000    5000    salary
2008-11-15      #C5392394       -2000   -2000   buy a cell
2008-11-25      #02342342       10000   10000   sell stock 0323
2008-12-1       #C5392394       -16     -2016   interest
2008-12-1       #C5392394       2016    0       repay the credit
2008-12-5       #S3755217       5500    10500   salary
2009-1-1        #S3755217       17.77   10517.8 interest
2009-1-1        #02342342       15.16   10015.2 interest
2009-1-1        #C5392394       -50     -50     annual fee

S3755217        Balance: 10517.8
02342342        Balance: 10015.2
C5392394        Balance: -50    Available credit:9950
Total: 20482.9
*/