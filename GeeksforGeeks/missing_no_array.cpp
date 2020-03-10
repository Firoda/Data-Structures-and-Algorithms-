#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n,k;
		cin >> n;
	
		for(int i=1;i<=n;i++)
		{
			cin >> k;
			if(k != i)
				cout << i;
		}
	}
	return 0;
}
