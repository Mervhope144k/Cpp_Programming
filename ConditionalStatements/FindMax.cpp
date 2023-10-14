#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cout << "Enter Two Numbers separated by white space" << endl;
	cin >> x >> y;
	if (x > y)
		cout << "Max is: " << x;
	else
		cout << "Max is " << y;
	cout << endl;
	return 0;
}
