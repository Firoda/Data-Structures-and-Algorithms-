#include<iostream>
using namespace std;
int tribonnacci(int n,int arr[])
{
	if(n == 0)
		return 0;
	else if(n == 1 || n == 2)
		return 1;
	for(int i=3;i<=500;i++)
			arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
	return arr[n];
}


int main()
{
	int a=0;
	int arr[500] = {NULL};
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	while(true)
	{
		cin >> a;
		if(a == -1)
			break;
		cout <<tribonnacci(a,arr)<<endl;
	}
	return 0;
}
