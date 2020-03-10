#include<iostream>
using namespace std;
long int karat_mul(int a, int b);
int numdigit(int a)
{
	int b = 0;
	while(a)
	{
		b++;
		a/=10;
	}
	return b;
}
int main()
{
	long int a,b;
	cin >> a >>b;
	karat_mul(a,b);
	return 0;
}

long int karat_mul(int a, int b)
{
	int digitofa = numdigit(a);
	int digitofb = numdigit(b);
	//now for exp
	//a = 10^n/2*k + l
	//b = 10^n/2*m + n
	int k,l,m,n;
	for(int i=0;i<digitofa/2;i++)
		k = 
		
	
	
}
