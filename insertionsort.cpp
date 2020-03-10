#include<iostream>
using namespace std;
void insertionsort(int arr[], int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		int key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
int main()
{
	int arr[] = {1,3,8,3,9,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr, size);
	for(int i=0;i<size;i++)
		cout << arr[i] << " ";
	return 0;
}