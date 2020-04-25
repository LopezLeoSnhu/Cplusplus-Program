//============================================================================
// Name        : LeoLopezProject2.cpp
// Author      : Leo Lopez
// Version     :
// Copyright   : Your copyright notice
// Description : Project 2
//============================================================================

#include <iostream>
#include <iomanip>
 /*Invest.cpp*/
using namespace std;

int main() {
	float initInv;
	float monDep;
	float AnuInt;
	float months;
	float years;

	float totalAm;
	float intAmt;
	float yearToInt;

	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;

	system("PAUSE");

	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount: $" << endl;
	cin >> initInv;
	cout << "Monthly Deposit: $" << endl;
	cin >> monDep;
	cout << "Annual Interest: %" << endl;
	cin >> AnuInt;
	cout << "Number of years: " << endl;
	cin >> years;
	months = years * 12;

	system("PAUSE");

	totalAm = initInv;

	cout << endl;
	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "================================" << endl;
	cout << "Year \t\tYear End Balance\t Year End Interest" << endl;
	cout << "-------------------------------" << endl;

	for (i = 0; i < years; ++i){
		intAmt = totalAm * (AnuInt/100);
		totalAm = totalAm + intAmt;
		cout << (i+1) << "\t\$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";
	}

	totalAm = initInv;

	cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "================================" << endl;
	cout << "Year \t\tYear End Balance\t Year End Interest" << endl;
	cout << "-------------------------------" << endl;

	for (int i = 0; i < years; ++i;){
		for (int j = 0; j < 12; ++j){
			intAmt = (totalAm + monDep) * ((AnuInt/100)/12);
			yearToInt = yearToInt * intAmt;
			totalAm = totalAm + mnDp + intAmt;
		}
		cout << (i+1) << "\t\t$" << fixed << setprecision(2)<< totalAm << "\t\t$" << yearToInt << "\n";
	}

	return 0;
}
