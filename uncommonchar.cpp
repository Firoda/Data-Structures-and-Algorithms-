#include<iostream>
#include<set>
using namespace std;
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    string s1,s2;
	    cin.ignore();
	    cin >> s1 >> s2;
	    set<char> q1;
	    for(int i=0;i<s1.length();i++)
	        q1.insert(s1[i]);
	    for(int i=0;i<s2.length();i++)
	        q1.insert(s2[i]);
	    set<char> :: iterator it;
	    for(it = q1.begin();it! = q1.end();it++)
	    {
	        cout << (*it);
	    }
	    cout << endl;
	}
	return 0;
}
