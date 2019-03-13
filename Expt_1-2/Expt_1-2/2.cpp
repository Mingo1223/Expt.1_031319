#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main ()

{
	float mass;
	float density;


	cout << "Please enter Mass: \n";
	cin >> mass;
	cout << "Please enter Density: \n";
	cin >> density;



	cout << "mass: " << mass << "g" << endl;
	cout << "density: " << density << "g/cm^3" << endl;
	cout << "Volume = " << setprecision(2) << fixed << mass*0.25/density << endl;


		
		_getch();
		return 0;

}