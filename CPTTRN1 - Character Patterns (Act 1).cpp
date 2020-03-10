#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	for(int q=0;q<test;q++)
	{
		int row,col;
		cin >> row >> col;
		for(int i=0;i<row;i++)
		{
			
			for(int j=0;j<col;j++)
			{
				if(i%2 != 0)
				{
				if(j%2==0)
				cout<<".";
				else
				cout<<"*";
				}
				else
				{
					if(j%2==0)
					cout << "*";
					else
					cout<<".";
				}
			}
			cout <<"\n";
		}
	}
}
