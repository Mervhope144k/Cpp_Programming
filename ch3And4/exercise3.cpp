#include <iostream>		//Declaration of cin, cout
#include <string>		//Declaration of class string
using namespace std;

int main(){
	string message("I have learned something new again!\n"),
	       prompt("Please input two lines of text:"),
	       str1, str2, sum;
	cout << message << endl;	//Outputs the message
	cout << "The length of the string is " << message.length() << endl;
	cout << prompt << endl;		//Request for input
	getline(cin, str1);		//Reads the first
	getline(cin, str2);		//and the second line of text
	
	sum = str1 + " * " + str2;	//Concatenates, assigns
	cout << sum << endl;		//and outputs strings.
	
	return 0;
}
