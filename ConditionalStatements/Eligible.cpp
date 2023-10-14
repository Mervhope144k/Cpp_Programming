#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter you age: \n";
	cin >> age;
	if (age <= 12 || age >=70)
		cout <<"Not Eligible\n";
	else
		cout  <<"Eligible\n";
	return 0;
}
