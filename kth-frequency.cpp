#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    ll n;
	    cin >> n;
	    ll k;
	    cin >> k;
	    ll arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    vector<int> v;
	    for(ll i=0;i<n;i++)
	    {
	        ll count = 1;
	        for(ll j=i+1;j<n;j++)
	        {
	            if(arr[j] == arr[i])
	                {
	                    count++;
	                     if(count == k)
	                		{
	                			auto it = find(v.begin(), v.end(), arr[i]);
	                			if(it == v.end())
	                				v.push_back(arr[i]);
							}
	                }
	           
	        }
	        //sort(v.begin(), v.end());
	        vector<int> :: iterator it;
	        for(it=v.begin(); it!=v.end();it++)
	        {
	            cout << *it <<" ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
