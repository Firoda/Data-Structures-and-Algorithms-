// left rotate without temp space
// 1 2 3 4 5 6 7
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int d;
    cin>>d;
 
    int i=0,j=d-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++,j--;
    }
    // Print this 
    
    i=d,j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++,j--;
         for(int i=0;i<n;i++)
    	{
        	cout<<a[i]<<" ";
    	}
    cout << endl;
    }
    
    i=0,j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++,j--;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
 
