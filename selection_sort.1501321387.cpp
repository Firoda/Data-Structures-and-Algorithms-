#include<iostream>
using namespace std;
int swap(int*a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionsort(int a[],int n)
{
	int min;
	for(int i=0;i<n-1;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]< a[min])
			min = j;
		}
		swap(&a[min],&a[i]);
	}
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
   	int a, arr[200],count;
   	while(a!=42)
   	{
   		cin >> a;
   		arr[count]= a;
   		count++;
	   }  
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
