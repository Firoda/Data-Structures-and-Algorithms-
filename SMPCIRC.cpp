#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
float distance(int x1, int y1, int x2, int y2)
{
	
	return pow(  pow(x1-x2,2)   +   pow(y1-y2,2)    ,0.5);
}

int main()
{
	int test;
	int x1,x2,y1,y2,r1,r2;
	cin >> test;
	while(t--)
	{
		cin >> x1>>x2>>r1>>y1>>y2>>r2;
		if(distance(x1,y1,x2,y2) == abs(r1+r2))
			cout << "E";
		else if(distance(x1,y1,x2,y2) <= abs(r1-r2))
			cout << "I";
		else
			cout << ""
	}	
	return 0;
}
