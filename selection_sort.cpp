#include<iostream>
#include<vector>
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
 	vector<int> myvector;
 	myvector.push_back(3);
	for(unsigned int i=0;i<myvector.size();i++)
	{
		cout << myvector[i];
		   }  	 

    return 0;
}
