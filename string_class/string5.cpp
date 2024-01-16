// string5.cpp : erasing a substring 

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s("The summer-time");
	s.erase(4,7);
	cout << s << endl;
	return 0;
}
