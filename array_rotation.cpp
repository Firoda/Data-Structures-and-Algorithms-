#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << "\n";
}

void leftRotate(int arr[], int d, int n)
{
	int temp;
	for(int i=0;i<d;i++)
	{
		temp = arr[0];
		for(int i=0;i<n-1;i++)
		{
			arr[i] = arr[i+1];
		}
		arr[n-1] = temp;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
   int n = sizeof(arr) / sizeof(arr[0]);
    
   // Function calling
   leftRotate(arr, 2, n);
   printArray(arr, n);
   return 0;
	
	return 0;
}
