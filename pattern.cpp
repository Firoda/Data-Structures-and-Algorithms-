#include<iostream>
using namespace std;
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    string p,s;
	    cin >> p;
	    cin >> s;
	    
	    int flag = 1;
	    int lens = s.length();
	    int lenp = p.length();
	    if((lens%lenp) != 0)
	    {
	        cout << 0 << endl;
	        flag = 0;
	        continue;
	    } 
	    int j = 0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i] != p[j])
	        {
	            cout << 0 << endl;
	            flag = 0;
	            break;
	        }
	        j++;
	        if(j == lenp)
	            j = 0;
	    }
	    if(flag)
	        cout << 1 << endl;
	}
	return 0;
}
