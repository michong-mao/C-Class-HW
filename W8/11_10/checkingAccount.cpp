//Author:  Charley Mao    20181125
#include "pch.h"
#include "checkingAccount.h"
#include<iostream>
using namespace std;

checkingAccount::checkingAccount(double a, double fee): Account(a) {
	fee = (fee < 0.0) ? 0.0 : fee;
}

void checkingAccount::credit(double a) {
	Account::credit(a);
	drawFee();
}

bool checkingAccount::debit(double a) {
	bool draw = Account::debit(a);
	if (draw) {
		drawFee();
		return true;
	}else
	return false;
}

void checkingAccount::drawFee() {
	Account::set_Bal(get_Bal() - fee);
	cout << "The draw fee is: $" << fee <<endl;

}
