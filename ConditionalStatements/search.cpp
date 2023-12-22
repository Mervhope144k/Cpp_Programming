#include <iostream>
using namespace std;

int linearSearch(int array[] , const int SIZE , int key);
int main()
{
	const int SIZE = 10;
	int array[10] = {1,2,3,4,5,6,7,8,9,11};
	int key = 4;
	int answer;
	answer = linearSearch(array, SIZE, key);
	cout << answer << endl;
	return 0;
}


int linearSearch(int array[] , const int SIZE , int key)
{
	for (int i = 0; i < SIZE;  i++)
	{
		if (key == array[i])
			return i;
		if(i == SIZE - 1)
			return -1;
	}
return i;
}
