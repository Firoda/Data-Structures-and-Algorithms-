#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int side,no_squares;
	
	while(true)
	{
		no_squares = 0;
		cin >> side;
		if(side == 0)
			break;
		for(int i=side;i>=0;i--)
		{	
			no_squares += i*i;	
		}
		cout << no_squares<<endl;
	}
	
	return 0;
}
