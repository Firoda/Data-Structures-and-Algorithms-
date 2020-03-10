#include<iostream>
using namespace std;
int rev(int num)
{
	int k = 0, remainder=0,reverse=0;
	while(num>0)
	{
		remainder = num%10;
		reverse = reverse*10 + remainder;
		num = num/10;
	}
	return reverse;
	
}	
int main()
{
	int test,a,b,c,d;
	cin >> test;
	while(test>0)
	{
		cin >> a >> b;
		cout << rev(rev(a)+rev(b))<<"\n";
		test--;
	}
	return 0;
}
