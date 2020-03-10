#include<iostream>
using namespace std;
int main()
{
	int p,q;
	cin >> p >> q;
	if(p==0 || q==0)
	{
		if(p==1 || q==1)
		cout << 1;
		else
		cout << 0;
	}
	else
	cout << 0;
	return 0;
}
