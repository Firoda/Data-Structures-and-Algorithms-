#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int b,count=0;
	while(true)
	{
		cin >> b;
		if(b == 42)
			break;
		else
		{
		
			a[count]=b;
			count++;
		}
	}
	for(int i=0;i<count;i++)
	{
		cout<<a[i]<<"\n";
	}
	return 0;
}
