#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long minDist(long long arr[], long long n, long long x, long long y)
int main()
{
	
}
long long minDist(long long arr[], long long n, long long x, long long y)
{  
    //add code here.
    long long int count = 0;
    long long int temp;
    int flag = 0; // Found x or y 
    int flag2 = 0;// 0 for x and 1 for y
    for(long long int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            flag = 1;
            flag2= 0;
            temp = i;
            break;
        }
        if(arr[i] == y)
        {
            flag = 1;
            flag2 = 1;
            temp = i;
            break;
        }
        cout << flag << endl;
    }
    if(flag == 0)
         return -1;
         
    for(long long int j=temp; j<n;j++)
    { 
        if(flag2)
        {
            if(arr[j] == x)
                break;
            count++;
        }
        if(!flag2)
        {
            if(arr[j] == y)
                break;
            count++;
        }
    }
    return count;
}


