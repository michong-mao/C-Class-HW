//author: Charley Mao      20181125
#ifndef savings_H
#define savings_H
#include "Account.h"

class savings : public Account {
public:
	savings(double, double);
	double calculateInterest();

private:
	double InterestRate;
};

#endif
