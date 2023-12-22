/**************************************
 * This program test the student ability
 * to read and predict the output before
 * running the program
 **************************************/

#include <iostream>
using namespace std;

void pause();		//Prototype

int main(){
	cout << endl << "Dear reader, "
			<< endl << "have a ";
	pause();
	cout << "!" << endl;
	return 0;
}

void pause()		//display the word BREAK
{
	cout << "BREAK";
}
