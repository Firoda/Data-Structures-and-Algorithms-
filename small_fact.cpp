#include<iostream>
#include<conio.h>
using namespace std;
long int fact(long int k)
{
	if(k==1)
	return 1;
	else
	return k*fact(k-1);
}

int main()
{
	int a;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++)
	{
		cin >> b[i];
	}
	for(int i=0;i<a;i++)
	{
		cout << fact(b[i]);
		cout << "\n";
	}
	return 0;
}
