#include <bits/stdc++.h>

using namespace std;
int main(){
    int test,n,k;
    cin >> test;
    while(test-->0)
    {
        cin >> n >> k;
        if(((k-1)| k) <= n)
        {    cout << k-1 << endl;
            cout << "k-1 getting printed"; }
        else
        {
		    if((k-2)<0)
          	{	cout << 0 <<endl;
                cout << "negative cond.."; }
            else
            {   cout << k-2 << endl;
        		cout << "k-2 getting printed";}
    	}
    }
    
    return 0;
}
