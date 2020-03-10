#include<regex>
#include<iostream>
using namespace std;
int main()
{
	string str;
	while(true)
	{
		cin >> str;
		regex e("[[:w:]]+@gmail+\\.com");
		bool match = regex_match(str, e);
		cout << (match? "Matched":"Not Matched")<<endl << endl;
	}
	return 0;
}
