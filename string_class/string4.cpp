// string4.cpp : insertion of a part of a string into another string
#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1("Ashley is a devil"),
		   s2(" sweetheart");

	s1.insert(12,s2,0,0);

	cout << s1 << endl;
	return 0;
}

