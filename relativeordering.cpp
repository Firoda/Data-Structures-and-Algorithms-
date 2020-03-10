#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int arr[m];
	int arr2[n];
	
	for(int i=0;i<m;i++)
		cin >> arr[i];
	
	for(int i=0;i<n;i++)
		cin >> arr2[i];
		
		
	map<int, int> mp;
	
	for(int i=0;i<m;i++)
	{
		mp[arr[i]]++;
	}
	
	int res[m] = {-1};
	
	int k = 0;
	for(int i=0;i<n;i++)
	{
		if(mp[arr2[i]])
		{
			int q = mp[arr2[i]];
			while(q>0)
			{
				res[k++] = arr2[i];
				q--;
				mp[arr2[i]]--;
			}
		}
	}
	
	map<int, int> :: iterator it;
	for(it=mp.begin(); it!= mp.end(); it++)
	{
		if( it->second  )
		{
			res[k++] = it->first;
		}
	}
	
	
	//Print array
	
	for(int i=0;i<m;i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
}
