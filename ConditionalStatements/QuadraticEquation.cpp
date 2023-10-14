#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, d, r1, r2;
	cout << "Enter the values of a , b and c: \n";
	cin >> a >> b >> c;
	d = (b*b) - (4*a*c);
	r1 = (-b + sqrt(d))/2*a;
	r2 = (-b - sqrt(d))/2*a;
	if (d == 0)
	{
		cout << "real and equal roots\n";
		cout << r1 << " " << r2 << endl;
	}
	else
		if (d > 0)
		{
			cout << "real and unequal roots\n";
			cout << r1 << " " << r2 << endl;
		}
		else 
			cout << "Imaginary roots\n";
	return 0;
}
	

