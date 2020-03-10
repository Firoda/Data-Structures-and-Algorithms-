#include<iostream>
using namespace std;
void reverse(int arr[], int start, int end);
int main()
{
    int n,d;
    cin >> n >> d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    // Rotation
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
 	for(int i=0;i<n;i++)
	 {
		cout << arr[i]<<"\t"; 	
	}   
}
void reverse(int arr[], int start, int end)
{
	while(start<end)
	{
		int temp = arr[start];
		arr[start]  = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
