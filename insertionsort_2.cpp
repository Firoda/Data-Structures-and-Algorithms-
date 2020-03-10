#include<iostream>
using namespace std;

void printarray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << arr[i]<<"\t";
	}
	cout << endl;
}
int* bubblesort(int arr[], int n)
{
	int swapped = 1;
	for(int i=0;i<n-1&&swapped;i++)
	{
		swapped = 0;
		for(int j=0;j<n-i-1;j++)
		{
			
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;			
			}
		}
	}
	return arr;
}

int* selection_sort(int arr[], int n)
{
	int min;
	for(int i=0;i<n-1;i++)
	{
		int min = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	return arr;	
}

int* insertion_sort(int arr[], int n)
{
	int j,v;
	for(int i=1;i<n;i++)
	{
		j = i;
		v = arr[i];
		while(arr[j-1]>v && j>=1)
		{
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = v;
	}
	return arr;
}

int* shell_sort(int *arr, int n)
{
	/*for(int gap=n/2; gap>0; gap/=2)
	{
		for(int i=gap;i<n;i++)
		{
			int v = arr[i];
			int j = i;
			for(j = i; j>=gap && arr[j-gap]>v; j-=gap)
				arr[j] = arr[j-gap];
			arr[j] = v;
		}
	}*/
	
	
	
	
	for(int gap=n/2; gap>0; gap/=2)
	{
		for(int i=gap; i<n;i++)
		{
			int temp = arr[i];
			int j;
			for(j=i; j>=gap && arr[j-gap]>temp;j-=gap)
				arr[j] = arr[j-gap];
			arr[j] = temp;
		}
	}
}

int main()
{
	int arr[] = {2,8, 12, 9, 48, 23, 21, 17, 16, 12};
	int n = 10;
	//printarray(insertion_sort(arr, n), n);
	//printarray(shell_sort(arr, n), n);	
	//printarray(bubblesort(arr, n), n);
	printarray(selection_sort(arr, n), n);
	return 0;
}
