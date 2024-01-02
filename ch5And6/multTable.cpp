//multTable.cpp
//10 x 10 multiplication table
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	cout << "\n\n		"
	     << " ****** MULTIPLICATION TABLE ****** "
	     << endl;
	int i, j;
	cout << "\n\n\n	";
		for (j = 1; j <= 10; ++j)
			cout << setw(5) << j;
		cout << "\n	"
		     << "    ----------------------------------------------"
		     << endl;
		for (i = 1; i <= 10; ++i){
			cout << setw(6) << i << " |";
			for (j = 1; j <= 10; ++j)
				cout << setw(5) << i * j;
			cout << endl;
		}
		cout << "\n\n\n";
		return 0;
}
