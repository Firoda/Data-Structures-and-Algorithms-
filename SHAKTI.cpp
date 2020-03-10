#include<iostream>
using namespace std;
int main()
{
	long unsigned int a,b;
	cin >> a;
	for(long unsigned int i=0;i<a;i++)
	{
		cin >> b;
		if(b%2 == 0)
		cout << "Thankyou Shaktiman";
		else
		cout << "Sorry Shaktiman";
	}
	return 0;
}
