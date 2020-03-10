#include<iostream>
using namespace std;
int checksorted(int arr[], int n)
{
	if(n==1)
		return 1;
	else
		return(arr[n-1]<arr[n-2]?0:checksorted(arr, n-1));
	//(condition) ? (if_true) : (if_false)
}

int main()
{
	int arr[] = {2,5,7,9,10,77,621,4600};
	cout << checksorted(arr,8);
	return 0;
}
