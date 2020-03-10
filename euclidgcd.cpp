#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
		return a;
	while(b!=0)
	{
		int c = a%b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	int x,y;
	cin >> x >> y;
	cout << gcd(x,y);
	return 0;
}
