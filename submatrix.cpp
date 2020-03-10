#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	int arr[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> arr[i][j];
		}
	}
	
	
	//Logic
	for(int i=0;i<n-k+1;i++)
	{
		for(int j=0;j<n-k+1;j++)
		{
			int sum = 0;
			for(int l=i;l<i+k;l++)
			{
				for(int m=j;m<j+k;m++)
				{
					
					sum+= arr[l][m];
				}
			}
			cout << sum << " ";
		}
		cout << endl;
	}
}
