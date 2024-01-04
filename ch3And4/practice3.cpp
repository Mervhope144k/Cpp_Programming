//Solution exercise 3 from chapter 4
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	long number = 0;
	cout << "Enter article number: ";
	cin >> number;

	int NoPieces = 0;
	cout << "Enter Number of pieces: ";
	cin >> NoPieces;

	double Price = 0.0;
	cout << "Enter price per piece: ";
	cin >> Price;

	cout << endl << endl;

	cout << "Article Number \t\tNumber of Pieces \tPrice per piece\n"
	     << left << setw(8) << number << "\t\t"
	     << left << setw(17) << NoPieces << "\t"
	     << Price << " Dollar\n";
	cout << "..............\t\t.............\t\t............. " << endl;
	return 0;
}
