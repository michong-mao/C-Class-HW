//author: Charley Mao   20181125
#include "pch.h"
#include "savings.h"
savings::savings(double a, double rate): Account(a) {
	InterestRate = (rate < 0.0) ? 0.0 : rate;
}

double savings::calculateInterest() {
	return get_Bal() * InterestRate;

}