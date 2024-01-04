//Exercise of formatting

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	string output(" --- Exercise 2 Solution ---");
	cout << output << endl;
	cout << "Left-justify number: " << left << setw(15) 
		<< 0.123456 << endl;
	cout << "Right-justify: " << right << fixed << setprecision(2) 
		<< setw(12) << 23.987 << endl;
	cout.precision(4);
	cout << "Exponential format: " << scientific << setprecision(4) 
		<< -123.456 << endl;
	return 0;
}
