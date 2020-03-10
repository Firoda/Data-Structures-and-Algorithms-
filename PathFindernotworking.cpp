#include<iostream>
#define NY 50
using namespace std;

void FindPath(int arr[NY][NY], int vis[NY][NY],bool *flag, int i, int j, int n)
{
    if(arr[i+1][j] == 2)
    {*flag = true; return;}
    if(arr[i-1][j] == 2)
    {*flag = true; return;}
    if(arr[i][j+1] == 2)
    {*flag = true; return;}
    if(arr[i][j-1] == 2)
    {*flag = true; return;}
    vis[i][j] == 1;
    if(i-1>=0 && arr[i-1][j] == 3 && vis[i-1][j]==0)
        FindPath(arr,vis,flag,i-1,j,n);
    if(i+1<=n && arr[i+1][j] == 3 && vis[i+1][j]==0)
        FindPath(arr,vis,flag,i+1,j,n);
    if(j-1>=0 && arr[i][j-1] == 3 && vis[i][j-1]==0)
        FindPath(arr,vis,flag,i,j-1,n);
    if(j+1<=n && arr[i][j+1] == 3 && vis[i][j+1]==0)
        FindPath(arr,vis,flag,i,j+1,n);
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
	    int arr[NY][NY];
	    int vis[NY][NY]={};
	    int si, sj;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin >> arr[i][j];
	            if(arr[i][j] == 1)
	            {
	                si = i;
	                sj = j;
	            }
	            vis[i][j] = 0;
	        }
	    }
	    bool flag = false;
	    FindPath(arr, vis, &flag, si, sj, n);
	    cout << flag << endl;
	    
	}
	return 0;
}
