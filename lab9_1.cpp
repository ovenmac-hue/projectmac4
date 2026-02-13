#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,inter,amont;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> inter;
	cout << "Enter amount you can pay per year: ";
	cin >> amont;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int year =1;
	while (loan > 0)
	{
				cout << fixed << setprecision(2); 
		year++;
		cout << setw(13) << left << year; 
		double rest;
		cout << setw(13) << left << loan;
		rest = loan*inter/100;
		double total;
		total = loan+rest;
		cout << setw(13) << left << rest;
		cout << setw(13) << left << total;
		if(total > amont){
			cout << setw(13) << left << amont;
		}else{
			cout << setw(13) << left << total;
		}
		loan = total-amont;
		cout << setw(13) << left << loan;
		cout << "\n";	
	}
	
	
	return 0;
}
