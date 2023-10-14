#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter age: \n";
	cin >> age;
	if (age >=12 && age <=50)
		cout << "Young\n";
	else
		cout << "Not Young\n";
	return 0;
}
