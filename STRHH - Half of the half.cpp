#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	char str[201];
	for(int i=0;i<test;i++)
	{
		cin >> str;
		int len = strlen(str);
		len = len/2;
		for(int j=0;j<len;j++)
		{
			if(j%2 == 0)
			cout << str[j];
		}
		cout<< "\n";
	}
}
