#include "myMacros.h"

int main(){
	int val = -5;
	cout << "The absolute value of -5 is: " 
		<< ABS(val) << endl;
	int x = 5, y = 7;
	cout << "The minimum value between x and y is: " 
		<< MIN(x,y) << endl;
	cout << "The maximum value between x and y is: "
		<< MAX(x,y) << endl;

	CLS;
	if(MAX(x,y) > ABS(val)){
		LOCATE(25,35);
		COLOR(RED,CYAN);
	}
	else
		INVERS;

	return 0;
}
