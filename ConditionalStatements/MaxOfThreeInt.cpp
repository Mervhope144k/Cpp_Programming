#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Entere three integers: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		cout << "Max: " << a << endl;
	else
		if (b > c)
			cout << "Max: " << b << endl;
		else
			cout << "Max: " << c << endl;
}
