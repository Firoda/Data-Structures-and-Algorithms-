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
void merge(int arr[], int l, int m, int r)
{
	int n1 = m-l+1;
	int n2 = r-m;
	
	int L[n1], R[n2];
	for(int i=0;i<n1;i++)
		L[i] = arr[l+i];
	for(int j=0;j<n2;j++)
		R[j] = arr[m+j+1];
	
	int i=0;
	int j=0;
	int k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else	
		{
			arr[k] = R[j];
			j++;
		}
		
		k++;
	}
	while(i<n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
} 


void mergeSort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m = l +(r-l)/2;
		mergeSort(arr,l, m);
		mergeSort(arr,m+1,r);
		merge(arr, l, m, r);
	}
	
}
void merge_sort(int arr[], int n)
{
	int l = 0;
	int r = n-1;
	mergeSort(arr, l, r);
}
int main()
{
	int arr[] = {2,8, 12, 9, 48, 23, 21, 17, 16, 12};
	int n = 10;
	//printarray(insertion_sort(arr, n), n);
	//printarray(shell_sort(arr, n), n);	
	//printarray(bubblesort(arr, n), n);
	merge_sort(arr, n);
	printarray(arr, n);
	return 0;
}
