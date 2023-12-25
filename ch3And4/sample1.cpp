//To use strings.
#include <iostream>			//declaration of cin, cout
#include <string>			//declaration of class string
using namespace std;

int main(){
	//Defines four strings:
	string prompt("what is your name:  "),
	name,				//An empty
	line( 40, '-'),			//string with 40 '-'
	total = "Hello ";		//is possible!
	
	cout << prompt;			//Request for input
	getline(cin, name);		//Inputs a name in one line
	total = total + name;		//Concatenates and
					//assigns string.
	cout << line << endl		//outputs line and name
		<< total << endl;

	cout << "Your name is "	//Outputs length
		<< name.length() << " characters long!" << endl;
	cout << line << endl;
	return 0;
}	
