#include <iostream>
#include <unordered_map>
using namespace std;

bool anagram(string str, string str2)
{
	if(str.length() != str2.length())
		return false;
	int n = str.length();
	unordered_map<char, int> freq;
	for(int i=0;i<n;i++)
	{
		freq[str[i]]++;
		freq[str2[i]]--;
	}
	for(auto i:freq)
	{
		if(i.second != 0)
			return false;
	}
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
