#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int m, int n)
{
    if(m == 0 || n == 0)
        return 0;
    if(s1[m-1] == s2[n-1])
        return 1+lcs(s1, s2, m, n);
    else
    {
        int a = lcs(s1, s2, m-1, n);
        int b = lcs(s1, s2, m, n-1);
        return max(a, b);
    }
}

int main()
 {
	//code
	int t;
	cin >> t;
	while(t-->0)
	{
	    int m, n;
	    cin >> m >> n;
	    string s1,s2;
	    cin >> s1 >> s2;
	    //cout << s1 <<" " << s2 << endl;
	    cout << lcs(s1, s2, m, n) << endl;
	}
	return 0;
}
