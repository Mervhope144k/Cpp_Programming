/**************************************************
 * A program that print some text and new lines
 *************************************************/

#include <iostream>
using namespace std;

void text();		//Prototype

int main(){
	cout << "Oh what" << endl;
	text();
	cout << "Oh yes," << endl;
	cout << "what ";
		text();
	return 0;
}

void text()		//display a text
{
	cout << "a happy day!" << endl;
}
