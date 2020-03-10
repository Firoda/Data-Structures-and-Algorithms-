#include<iostream>
#include<exception>

using namespace std;
int main()
{
	int x = -1;
	try{
		if(x<0)
		{
			throw "Exception caught";
			cout << "Not printed";}
	}
	catch(char const *a)
	{
		cout << a << endl;
	}
	return 0;
}
