#include <iostream>
using namespace std;

int main()
{
	int amount;
	float disAmount;
	cout << "Enter the amount: \n";
	cin >> amount;
	if (amount >= 5000)
	{
		disAmount = amount - amount * 0.2;
		cout << disAmount << endl;
	}
	else
		if (amount >= 2000 && amount < 5000)
		{
			disAmount = amount - amount * 0.1;
			cout << disAmount << endl;
		}
		else
		{
			disAmount = amount - amount * 0.05;
			cout << disAmount << endl;
		}
	return 0;
}
