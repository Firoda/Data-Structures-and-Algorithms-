#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	char s1[10000], s2[10000];
	while(test--)
	{
	cin >> s1 >> s2;
	int l1;
	if(strlen(s1)>strlen(s2))
		l1 = strlen(s1);
	else
		l1 = strlen(s2);
	for(int i=0;i<=l1;i++)
	{
			cout <<s1[i]<<s2[i];
	}
	cout <<"\n";
	
	}
}
