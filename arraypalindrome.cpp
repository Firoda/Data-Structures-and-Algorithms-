#include<iostream>
using namespace std;
int PalinArray(int a[], int n)
{  //add code here.
    for(int i=0;i<n/2;i++)
    {
        if(a[i] != a[n-i-1])
            return 0;
    }
    return 1;
}

int main()
{
	int arr[] = {2,4,3,4,2,2};
	cout << PalinArray(arr, sizeof(arr)/sizeof(arr[0]));
	
}
