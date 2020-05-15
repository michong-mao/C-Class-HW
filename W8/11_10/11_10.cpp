// 11_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Charley Mao    20181125

#include "pch.h"
#include <iostream>
#include "Account.h"
#include "checkingAccount.h"
#include "savings.h"
using namespace std;

int main()
{
	double checking;
	double fee;
	cout << "What is the checking amount?" << endl;
	cin >> checking;
	cout << "What is the checking draw fee?" << endl;
	cin >> fee;
	checkingAccount checking1(checking, fee);

	double saving;
	double rate;
	cout << "What is the saving amount?" << endl;
	cin >> saving;
	cout << "What is the interst rate?" << endl;
	cin >> rate;
	savings saving1(saving, rate);

	double draw;
	double save;
	cout << "How much do you want to withdraw in dollars? " << endl;
	cin >> draw;
	checking1.debit(draw);
	cout << "How much do you want to save in dollars? " << endl;
	cin >> save;
	checking1.credit(save);
	cin.get();
	cin.get();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
