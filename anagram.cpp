#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string str, string str2)
{
	// Time Complexity is Nlogn
	int s1 = str.length();
	int s2 = str.length();
	if(s1!=s2)
		return false;
	sort(str.begin(), str.end());
	// Internally implemented as quick sort
	sort(str2.begin(), str2.end());
	
	for(int i=0;i<s1;i++)
		if(str[i]!=str2[i])
			return false;
	return true;
}

int main()
{
	string str = "aditya";
	string str2 = "aadyit";
	
	if(anagram(str, str2))
		cout << "Are";
	else
		cout << "Are not";
	return 0;
}
