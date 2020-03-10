#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int test,n;
	long int sum = 0;
	int x,y,k,temp,a=0;
	cin >> test;
	string output[test];
	while(test--)
	{
		cin >> x >> y >> n >> k;
	 //Pages required
	 	sum = sum + n;
	 	if(sum>pow(10,4))
	 		exit(0);
		int page[n],cost[n];
		for(int i=0;i<n;i++)
			cin >> page[i] >> cost[i];
		for(int i=0;i<n;i++)
		{
			if(page[i]>=x-y && cost[i]<=k)
				a=1;
		}
		if(a == 0)
		{
		output[test] = "UnluckyChef";
		}
		else
		{
		output[test] = "LuckyChef";
		}
		a=0;
	}
	
	for(int i=test;i>0;i--)
		cout<<output[i]<<"\n";
	return 0;
}
