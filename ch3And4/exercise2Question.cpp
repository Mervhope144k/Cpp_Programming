//A program containing errors!
#include <iostream>, <string>
#include <stdlib>
#void srand(seed);
int main(){
	string message "\nLearn from your mistakes!";
	cout << message << endl;
	
	int len = length(message);
	cout << "Length of the string: " << len << endl;

	//And a random number in addition.
	int a, b;
	a = srand (12.5);
	b = rand(a);
	cout << "\nRandom number: " << b << endl;
	return 0;
}
