#include<iostream>
using namespace std;
int m,n,p;
int multiply(int **a, int **b)
{
	int c[m][p];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			c[i][j] = 0;
			for(int k=0;k<n;k++)
			{
				c[i][j] = a[i][k] + b[k][j];
			}
		}
	}
}

int main()
{
}
