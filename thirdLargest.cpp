#include<iostream>
using namespace std;

long long thirdLargest(long a[], long n)
{
     //Your code here
     int first = INT_MIN;
     int second = INT_MIN;
     int third = INT_MIN;
     for(int i=0;i<n;i++)
     {
         if(a[i]>first)
		 	first = a[i];     
     }

     for(int i=0;i<n;i++)
     {
     	if(a[i]<first && a[i]>second)
     		second = a[i];
	 }

	 for(int i=0;i<n;i++)
	 {
	 	if(a[i]<second && a[i]>third)
	 		third = a[i];
	 }
     return third;
}


int main()
{
	long int arr[] = {1, 8, 10, 11, 45 ,6};
	long int n = 6;
	cout << thirdLargest(arr, n) << endl;
	return 0;
}
