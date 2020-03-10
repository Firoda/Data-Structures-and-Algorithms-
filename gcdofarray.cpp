#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	if(b == 0)
		return a;
	else
		return GCD(b, a%b);
}
int findGCD(int arr[], int n)
{
	int result = arr[0];
	for(int i=1;i<n;i++)
		result = GCD(result, arr[i]);
		
	return result;
}

int main()
{
	int arr[] = {2, 6, 7 ,8 ,9};
	int n = 5;
	cout << findGCD(arr, n)<<endl;
}
