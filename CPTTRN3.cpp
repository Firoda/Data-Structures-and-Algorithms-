#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test --)
	{
		int row,col;
		cin >> row >> col;
		col = col*4-(col-1);
		row = row*3+1;
		for(int i=0;i<row;i++)
		{
		for(int j=0;j<col;j++)
		{
			if(i%3==0)
				cout <<"*";
			else
			{
				if(j%3 == 0)
					cout <<"*";
				else if(j%2 ==0 || j%1 == 0)
					cout <<".";
				
			}
		}
		cout<<"\n";
			
		}
		cout<<"\n";
	}
	return 0;
}
