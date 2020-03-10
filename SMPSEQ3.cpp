#include<iostream>
using namespace std;
int bsearch(int arr[], int l,int h, int x);
int check(int arr[],int l, int m);
int main()
{
	int n,m,arr_str=0;
	cin >> n;
	int *arr_s = new int[n];
	for(int i=0;i<n;i++)
		cin >> arr_s[i];
	cin >> m;
	int *arr_q = new int[n];
	for(int j=0;j<m;j++)
		cin >> arr_q[j];
	for(int i=0;i<n;i++)
		{
			arr_str = arr_s[i];
			if(!bsearch(arr_q,0,m,arr_str))
				{cout << arr_s[i]<<" ";}
			
		}
	return 0;
}
int bsearch(int arr[], int l,int h, int x)
{
	if(h>=l)
	{
		int mid = l +  (h-l)/2;
		if(arr[mid] == x)
			return 1;
		else if(arr[mid]>x)
			return bsearch(arr,l,mid-1,x);
		else
		 	return bsearch(arr,mid+1,h,x);
	}
	else
		return 0;
}

