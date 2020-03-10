#include<iostream>
using namespace std;
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    string s,res[1000];
	    cin.ignore();
	    cin >> s;
	    int j = 0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i] == ' ')
	        {
	            res[j++] = '%';
	            res[j++] = '2';
	            res[j++] = '0';
	            
	        }
	        else
	        {
	            res[j] = s[i];
	            j++;
	        }
	    }
	    res[j] = '\0';
	    for(int i=0;i<1000;i++)
	    {
	        cout << res[i];
	    }
	    cout << endl;
	}
	return 0;
}
