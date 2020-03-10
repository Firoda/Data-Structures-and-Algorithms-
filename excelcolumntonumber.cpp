#include<iostream>
#include<math.h>
using namespace std;

int ColumntoNumber(string s)
{
	int res = 0;
	int len = s.length();
	for(int i=0;i<len;i++)
	{
		cout << "Res intial "<< res << endl;
		res*= 26;
		cout << "Res after 1"<<res << endl;
		res+= s[i]-65+1;
		cout << "Res after 2"<< res << endl;
	}
	cout << "Res intial "<<res << endl;
	return res;
}

int main()
{
	int a =  ColumntoNumber("CDA");
	cout<< "Value of A is "<<a<<endl;
	return 0;
}
