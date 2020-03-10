#include<iostream>
using namespace std;
int binarysearch(int arr[], int l, int h, int x)
{
	if(h>=l)
	{
		int mid  = l + (h-l)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
		{
			return binarysearch(arr,l, mid-1,x);
		}
		
		return binarysearch(arr, mid+1,h,x);
	}
	else
		return -1;
	
}




int main()
{
int arr[] = {2,3,7,10,20,25,36,55,57,68,72,79,84,89,95,100};
int size = sizeof(arr)/sizeof(arr[0]);
int x;
cin >> x;
cout << binarysearch(arr,0,size-1,x);
return 0;	
}


