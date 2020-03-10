#include<bits/stdc++.h>
using namespace std;

int maxCuts(int n, int a, int b, int c)
{
	if(n < 0)
		return -1;
	if(n == 0)
		return 0;
	int ca = maxCuts(n-a, a, b, c);
	int cb = maxCuts(n-b, a, b, c);
	int cc = maxCuts(n-c, a, b, c);
	
	int res = max({ca, cb, cc});
	if(res == -1)
		return -1;
	else
		return res+1;
}


int main()
{
	cout << maxCuts(23, 11, 9, 12);
}
