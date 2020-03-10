#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n,w;
	cin >> n;
	int **q = new int*[n];
	for(int i=0;i<n;i++)
	{
		int k;
		cin >> k;
		q[i] = new int[k];
		for(int j=0;j<k;j++)
		{
			cin >> q[i][j];
		}
		
	}  
	while(w-- > 0) 
	{
		
		int o_index, i_index;
		cin >> o_index >> i_index;
		cout << q[o_index][i_index]<<endl;
	}
    return 0;
}

// int 
