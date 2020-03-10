#include<iostream>
#include<math.h>
using namespace std;
int factorial(int y);
int main()
{
	int x,i=1;
	float sinx;
	cout << "Enter the value of x in sin(x)\t";
	cin>>x;
	for(i=1;i<8;i=i+2)
	{
		sinx = sinx + (float)(pow(x,i)/factorial(i));
	}
	cout << sinx;
}

int factorial(int y)
{
	if(y == 1 || y==0)
		return 1;
	else
		return y*factorial(y-1);
}
