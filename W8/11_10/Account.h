//Author Charley Mao   20181125
#ifndef Account_H
#define Account_H

class Account{
public:
	Account(double);
	void credit(double);
	bool debit(double);
	void set_Bal(double);
	double get_Bal();

private:
	double balance;
};

#endif