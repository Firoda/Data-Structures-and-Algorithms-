#include<iostream>
using namespace std;
int main()
{
	int test,n;
	long int c;
	cin >> test;
	while(test--)
	{
		int total = 0,temp=0;
		cin >> n >> c;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			total = total + temp;
		}
		if(total<=c)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}	
	return 0;
	
}
