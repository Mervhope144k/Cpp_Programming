// strings1.cpp : Using strings
#include <iostream>
#include <string>

using namespace std;

string prompt("Enter a line of text: "),
	   line(50, '*');

int main(){
	string text;
	cout << line << endl << prompt << endl;

	getline(cin,text);
	cout << line << endl
		<< "Your text is " << text.size()
		<< "Characters long!" << endl;

	string copy(text),
		   start(text,0,10);

	cout << "Your text: \n" << copy << endl;
	text = "1234567890";
	cout << line << endl
		<< "The first 10 characters: \n" << start << endl
		<< text << endl;
	return 0;
}
