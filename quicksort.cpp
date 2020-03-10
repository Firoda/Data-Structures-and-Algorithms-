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
void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

int partition(int arr[], int l, int r)
{
	int pivot = arr[r];
	int pIndex = (l-1);
	for(int i=l;i<=r-1;i++)
	{
		if(arr[i]<=pivot)
		{
			pIndex++;
			swap(&arr[i], &arr[pIndex]);
		}
		
	}
	swap(&arr[pIndex+1], &arr[r]);
	return pIndex+1;
}

//
//int partition (int arr[], int low, int high) 
//{ 
//    int pivot = arr[high];    // pivot 
//    int i = (low - 1);  // Index of smaller element 
//  
//    for (int j = low; j <= high- 1; j++) 
//    { 
//        // If current element is smaller than or 
//        // equal to pivot 
//        if (arr[j] <= pivot) 
//        { 
//            i++;    // increment index of smaller element 
//            swap(&arr[i], &arr[j]); 
//        } 
//    } 
//    swap(&arr[i + 1], &arr[high]); 
//    return (i + 1); 
//} 

void quicksort(int arr[], int l, int r)
{
	if(l<r)
	{
		int pIndex = partition(arr,l,r);
		quicksort(arr, l, pIndex-1);
		quicksort(arr, pIndex+1, r);
	}
}

int main()
{
	int arr[] = {2,8, 12, 9, 48, 23, 21, 17, 16, 12};
	int n = 10;
	//printarray(insertion_sort(arr, n), n);
	//printarray(shell_sort(arr, n), n);	
	//printarray(bubblesort(arr, n), n);
	quicksort(arr, 0, n-1);
	printarray(arr, n);
	return 0;
}
