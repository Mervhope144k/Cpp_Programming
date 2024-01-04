//Reads atext with the operator >>
//and the fuction getline()

#include <iostream>
#include <string>

using namespace std;

string header =
"  --- Demonstrates Unformatted Input ---";

int main(){
	string word, rest;
	cout << header
		<< "\n\nPress <return> to go on" << endl;
	cin.get();			//Read the newline
					//Without saving.
	cout << "\nPlease enter a sentence with several words!"
		<< "\nEnd with <!> and <return>. "
		<< endl;

	cin >> word;			//Read the first word
	getline(cin, rest, '!');	//and the remaining text
					//up to the character!
	cout << "\nThe first word: " << word
		<< "\nRemaining text: " << rest << endl;
	return 0;
}
