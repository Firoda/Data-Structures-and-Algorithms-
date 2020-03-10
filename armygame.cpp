#include <bits/stdc++.h>

using namespace std;
int gameWithCells(int n, int m) {
    /*
     * Write your code here.
     */
    if(n%2 == 0 && m%2 == 0)
    {
        return (n/2)*(m/2);
    }
    else if(n%2 == 0 && m%2 != 0)
    {
        int a = 0;
        a += (n/2)*((m-1)/2);
        a += n/2;
        return a;
    }
    else if(n%2 != 0 && m%2 == 0)
    {
        int b = 0;
        b += ((n-1)/2)*(m/2);
        b += m/2;
        return b;
    }
    else
    {
        int c = 0;
        c+= ((n-1)/2)*((m-1)/2);
        c+= (n-1)/2;
        c+= (m-1)/2;
        c+= 1;
        return c;
    }

}

int main()
{
	int n,m;
	cin >> n >> m;
	cout << gameWithCells(n,m);
	return 0;
}
