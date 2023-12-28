#include <iostream>		//obligator
#include <iomanip>		//declarations
using namespace std;

int main(){

	cout << "1st Example: " << endl;
	cout << '|' << setw(6) << 'X' << '|';
	cout << endl << endl;

	cout << "2nd Example: " << endl;
	cout << fixed << setprecision(2) 
		<< setw(10) << 123.4 << endl
		<< "1234567890" << endl;
	return 0;
}
	
