#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n,m,n1,n2,q;
		cin >> n >> m;
		q = n/m;
		n1 = q*m;
		if(n*m>0)
			n2 = m*(q+1);
		else
			n2 = m*(q-1);
		
		if(abs(n-n1)<abs(n-n2))	
			cout << n1 <<endl;
		else
			cout << n2 << endl;	
	}
}
