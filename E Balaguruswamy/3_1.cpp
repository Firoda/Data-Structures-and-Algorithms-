#include<iostream>
using namespace std;
int main()
{
	int a =30, b= 40;
	swap(a,b);
	cout << a << endl;
	cout << b << endl;
}
void swap(int & s, int & n)
{
	int temp;
	temp = n;
	n = s;
	s = temp;
}
