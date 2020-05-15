//Author: Charley Mao    20181125
#ifndef checkingAccount_H
#define checkingAccount_H
#include "Account.h"

class checkingAccount : public Account{
public:
	checkingAccount(double, double);
	void credit(double);
	bool debit(double);

private:
	double fee;
	void drawFee();
};

#endif