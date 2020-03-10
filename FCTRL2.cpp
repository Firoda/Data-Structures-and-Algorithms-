#include<iostream>
using namespace std;
#define MAX 500
int multiply(int i, int res[], int res_size);
void factorial(int n)
{
	int res[MAX];
	res[0] = 1;
	int res_size = 1;
	for(int i=2;i<=n;i++)
		res_size = multiply(i,res,res_size);
	
	for(int j=res_size-1;j>=0;j--)
	{	cout << res[j];}
	cout << endl;	
}

int multiply(int i, int res[], int res_size)
{
	int carry = 0;
	for(int j=0;j<res_size;j++)
	{
		int prod = res[j]*i+carry;
		res[j] = prod%10;
		carry = prod/10;
	}
	while(carry)
	{
		res[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}
	return res_size;
}








int main()
{
	int test,n;
	cin >> test;
	while(test--)
	{
		cin >> n;
		factorial(n);
	}	
	
	return 0;
}
