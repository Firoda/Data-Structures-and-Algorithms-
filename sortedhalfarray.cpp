#include<iostream>
using namespace std;
void printArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    int temp[n];
	    int half = 0;
	    for(int i=0;i<n - 1;i++)
	    {
	        if(arr[i]>arr[i+1])
	        {
	            half = i+1;
	            break;
	        }
	    }
	    cout << half << endl;
	    if(half = 0)
	    {
	            printArray(arr, n);
	            continue;
	    }
	    int j = half;
	    int k = 0;
	    int i = 0;
	    while(i<half && j<n)
	    {
	        if(arr[i]<arr[j])
	            temp[k++] = arr[i++];
	        else
	            temp[k++] = arr[j++];
	    }
	    while(i<half)
	        temp[k++] = arr[i++];
	       
	    while(j<n)
	        temp[k++] = arr[j++];
	   
	    for(int i=0;i<n;i++)
	    {
	        cout << temp[i] << " ";
	    }
	}
	return 0;
}
