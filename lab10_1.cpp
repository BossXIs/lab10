#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,interestperY,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	
	cout << "Enter interest rate per year (%): ";
	cin >> interestperY;
	
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	

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
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	cout << fixed << setprecision(2);
	double prevB=loan;
	int year = 1;
	double inter,total;
	do
	{
		
		cout << setw(13) << left << year;
		cout << setw(13) << left << prevB;
		inter = prevB*interestperY/100.00;
		cout << setw(13) << left << inter;
		total = prevB+inter;
		cout << setw(13) << left << total;
		if(total < pay)
		{
			pay = total;
		}
		cout << setw(13) << left << pay;
		prevB = total - pay;
		cout << setw(13) << left <<  prevB;
		cout << "\n";	
		year++;
	}while(prevB !=0);
	
	
	return 0;
}
