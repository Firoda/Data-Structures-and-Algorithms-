#include <iostream>
typedef long long int ll;
using namespace std;

int main() {
	
	int test;
	cin >> test;
	while(test--)
	{
	    ll n,k,v;
	    cin >> n >> k >> v;
	    ll total_ele = n+k;
	    ll sum_ni = 0;
	    ll temp;
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp;
	        sum_ni+=temp;
	    }
	    //cout << sum_ni << endl;
	    temp = v*(n+k);
	    temp = temp - sum_ni;
	    if(temp<0)
	    {
	        cout << -1 << endl;
	        continue;
	    }
	    {
	        float ans = (float)temp/k;
	        //cout << ans << endl;
	        if(ans>= 0)
	        {
	            cout << ans << endl;
	        }
	        else
	        {
	            cout << -1 << endl;
	        }
	    }
	        
	}
	return 0;
}

