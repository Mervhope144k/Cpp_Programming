//toupper.cpp: A filter that converts to capitals
//-----------------------------------------------
#include <iostream>
#include <cctype>
using namespace std;

int main(){
	char c;
	long nChar = 0,	     //counts all characters
	     nConv = 0;	     //and converted characters.
	while(cin.get(c)){   //As long as a character
		++nChar;     //can be read, to increment
		if(islower(c)){ //Lowercase letter?
			c = toupper(c); //converts the character
			++nConv; //and counts it
		}
		cout.put(c);     //Output the character
	}
	clog << "\n Total of characters: " << nChar
	     << "\n Total of converted characters: " << nConv 
	     << endl;
	return 0;
}
