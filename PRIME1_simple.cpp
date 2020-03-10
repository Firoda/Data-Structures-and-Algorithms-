#include<iostream>
#include<math.h>
using namespace std;
bool prime(long long int n)
{
	bool prime= true;
	if(n == 1)
	{
		prime = false;
		return prime;
	}
	for(long long int i=2;i<=sqrt(n);i++)
	{
		if(n%i == 0)
			{
				prime = false;
				break;
			}
	}
	return prime;
}

int main()
{
	int test;
	long long int m,n;
	cin >> test;
	while(test--)
	{
		cin >> m >> n;
		for(long long int i=m;i<=n;i++)
		{
			if(prime(i))
				cout << i<<endl;
		}
	}
	
	return 0;
}
