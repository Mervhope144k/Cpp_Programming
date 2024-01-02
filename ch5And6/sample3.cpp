//Demonstration of compound assignment
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float x, y;
	cout << "\nPlease enter a starting value: ";
	cin >> x;

	cout << "\nPlease enter the increment value: ";
	cin >> y;

	x += y;

	cout << "\nAnd now multiplication! ";
	cout << "\nPlease enter a factor: ";
	cin >> y;

	x *= y;

	cout << "\nFinally division.";
	cout << "\nPlease supply a divisor: ";
	cin >> y;

	x /= y;

	cout << "\nAnd this is "
	     <<"your current lucky number: "
	     			//without digits after
				//the decimal point:
	     << fixed << setprecision(0)
	     << x << endl;
	return 0;
}
