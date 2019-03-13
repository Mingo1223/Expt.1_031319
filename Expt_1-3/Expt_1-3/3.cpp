#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main ()

{
	float NetBalance;
	float payment;
	float d1;
	float d2;
	float InterestRate;



	cout << "Please enter NetBalance: \n";
	cin >> NetBalance;
	cout << "Please enter payment: \n";
	cin >> payment;
	cout << "Please enter d1: \n";
	cin >> d1;
	cout << "Please enter d2: \n";
	cin >> d2;
	cout << "Please enter Interest Rate: \n";
	cin >> InterestRate;
	



	cout << "Net Balance: " << NetBalance <<  endl;
	cout << "Payment: " << payment <<  endl;
	cout << "d1: " << d1 <<  endl;
	cout << "d2: " << d2 <<  endl;
	cout << "Interest Rate: " << InterestRate << endl;
	cout << "AvarageDailyBalance: " << (NetBalance*d1-payment)/d1 << endl;
	cout << "Interest: " << setprecision(2) << fixed << ((NetBalance*d1-payment)/d1)*InterestRate << endl;





		
		_getch();
		return 0;

}