//Reads integral decimal values, and
//generates octal, decimal, and hexadecimal output.

#include <iostream>		//Declarations of cin, cout and
using namespace std;		//manipulators oct, hex, ...

int main(){
	int number;
	cout << "Please enter an integer: ";
	cin >> number;
	cout << uppercase	//for hex-digits
	     << " octal  \tdecimal  \thexadecimal\n "
	     << oct << number << "	\t"
	     << dec << number << "	\t"
	     << hex << number << endl;
	return 0;
}
