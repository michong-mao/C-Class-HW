//Author: Charley Mao    20181125
#include "pch.h"
#include "Account.h"
#include<iostream>
using namespace std;

Account::Account(double a) {
	if (a >= 0.0){
		balance = a;
	}else{
		balance = 0.0;
	}
}

void Account::credit(double a) {
	balance += a;
}

bool Account::debit(double a) {
	if (a > balance) {
		cout << "Debit amount exceeded account balance " << endl;
		return false;
	}else{
		balance = balance - a;
		return true;
	}
}

void Account::set_Bal(double new_Bal) {
	balance = new_Bal;
}

double Account::get_Bal() {
	return balance;
}
