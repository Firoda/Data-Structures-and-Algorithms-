#include<iostream>
#include<cmath>
using namespace std;
void trail(unsigned long int n)
{
	int i = 1;
	int trail_zeroes = 0;
	while(n>=pow(5,i))
	{
		trail_zeroes += floor(n/pow(5,i));
		i++;
	}
	cout << trail_zeroes<<endl;
}



int main()
{
	long int test;
	unsigned long int n;
	cin >> test;
	while(test--)
	{
		cin >> n;
		trail(n);
		
	}	
	
	return 0;
}
