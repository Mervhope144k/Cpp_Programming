//Evaluates given input.
#include <iostream>
using namespace std;

int main(){
	int command = menu();			//The function menu() reads 
						//a command
	switch (command)			//Evaluate command
	{
		case 'a':
		case 'A':
			action1();		//carryout 1st action
			break;
		case 'b':
		case 'B':
			action2();		//carry out 2nd action
			break;
		default:
			cout << '\a' << flush;	//Beep on invalid input
	}
	return 0;
}

