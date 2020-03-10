#include<iostream>
using namespace std;

int setbits(int n)
{
	int bits = 0;
	while(n)
	{
		bits += n & 1;
		n>>=1;
	}
	return bits;
}

int main()
{
	int a = 10;
	cout << setbits(a)<<endl;
	int b = 1<<10;
	cout << b << endl;
	int c = 5<<10;
	cout << c << endl;
}
