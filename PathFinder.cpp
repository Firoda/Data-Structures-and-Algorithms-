#include<iostream>
using namespace std;

void recur(int i, int j, int di, int dj, int a[21][21], int m[21][21], int n, int *ans)
{
	if(m[i+1][j] == 2)
	{*ans = 1; return;}
	if(m[i-1][j] == 2)
	{*ans = 1; return;}
	if(m[i][j+1] == 2)
	{*ans = 1; return;}
	if(m[i][j-1] == 2)
	{*ans = 1; return;}
	
	a[i][j] = 1;
	if(i-1>=0 && a[i-1][j] == 0 && m[i-1][j] == 3)
		recur(i-1,j,di,dj, a, m, n, ans);
	if(i+1<=n && a[i+1][j] == 0 && m[i+1][j] == 3)
		recur(i+1,j,di,dj, a, m, n, ans);
	if(j-1>=0 && a[i][j-1] == 0 && m[i][j-1] == 3)
		recur(i,j-1,di,dj, a, m, n, ans);
	if(j+1<=n && a[i][j+1] == 0 && m[i][j+1] == 3)
		recur(i,j+1,di, dj, a, m, n, ans);
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
	int n,m[21][21],i,j,di,dj,si,sj,a[21][21];
	cin>>n;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		cin >> m[i][j];
		if(m[i][j] == 1)
		{
			si = i;
			sj = j;
		}
		if(m[i][j] == 2)
		{
			di = i;
			dj = j;
		}
		a[i][j] = 0;
	}
	int ans = 0;
	recur(si,sj,di,dj,a,m,n,&ans);
	cout << ans << endl;
    }
	return 0;
}

