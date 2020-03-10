#include<iostream>
using namespace std;
bool no_number(int x, int y);
bool odd(int x, int y)
{
	if(x%2 == 0 && y%2 == 0)
		return false;
	else
		return true;
}
int main()
{
	int test,x,y;
	cin >> test;
	while(test--)
	{
		cin >> x >> y;
		if(no_number(x,y))
			cout << "No Number"<<endl;
		else if(odd(x,y))
			cout << x+y-1<<endl;
		else
			cout << x+y<<endl;
	}
	return 0;
}


bool no_number(int x, int y)
{
	if(x == y)
		return false;
	else if (y == (x-2))
		return false;
	return true;
}
