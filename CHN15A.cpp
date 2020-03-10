#include<iostream>
using namespace std;
int main()
{
	int test = 0,n,k;
	cin >> test;
	for(int i=0;i<test;i++)
	{
		int count=0;
		cin >> n;
		cin >> k;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin >> arr[j];
			}
		for(int j=0;j<n;j++)
		{
			arr[j] = arr[j]+k;
		}
	
	for(int l=0;l<n;l++)
		{
			if(arr[l]%7 == 0)
				count++;
		}
		cout<<count<<endl;
		
	}
	return 0;
}

