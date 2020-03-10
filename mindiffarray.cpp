#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int arr[] = {11, 13, 16};
	int n = 3;
	int min = INT_MAX;
	 for(int i=0;i<n;i++)
	        {
	            for(int q=i+1;q<n;q++)
	            {
	                if((arr[q]-arr[i])< min)
	                    min = (arr[q] - arr[i]);
	            }
	        }
	        cout << min << endl;
	
	return 0; 
}
