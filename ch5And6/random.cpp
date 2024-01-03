//random.cpp
//Output 20 random numbers from 1 to 100
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){
	unsigned int i, seed;

	cout << "\nPlease type an integer between "
		"0 and 65535: ";
	cin >> seed;	//reads integer
	srand(seed);	//seeds the random number generator
	
	cout << "\n\n	"
		"****** RANDOM NUMBERS ******\n\n";
	for (i = 1; i <= 20; ++i)
		cout << setw(20) << i << " . random number = "
		     << setw(3) << (rand() % 100 + 1) << endl;
	return 0;
}
