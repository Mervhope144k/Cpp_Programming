#include <iostream>
using namespace std;

int main()
{
	int m1, m2, m3, Total;
	double Avg;
	cout << "Enter three marks: \n";
	cin >> m1 >> m2 >> m3;
	Total = m1 + m2 + m3;
	Avg = Total / 3;
	if (Avg >= 60)
		cout << "Grade 'A'\n";
	else
		if (Avg <= 35 || Avg < 60)
			cout << "Grade 'B'\n";
		else 
			cout << "Grade 'C'\n";
	return 0;
}
