#include<iostream>
using namespace std;

int main()
{
	register static int i = 10;
	i = 11;
	cout << i;
	return 0;
}
