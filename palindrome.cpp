#include <iostream>
using namespace std;

bool palindrome(string s, int st, int e)
{
	if(st == e)
		return true;
	if(s[st] != s[e])
		return false;
	if(st<e+1)
		palindrome(s, st+1, e-1);
	
	return true;
}

int main() {
	//code
	string s = "abbba";
	int len = s.length();
	cout << palindrome(s,0, len-1);
	return 0;
}
