#include<iostream>
using namespace std;

void recur(string s, int index, int length)
{
	if(index == length-1)
	{
		cout << s[index]<<endl;
		return;
	}
	else
	{
		index++;
		recur(s,index,length);
	}
}

int main()
{
	string s = "Abcdefghijkl";
	int n = s.length();
	recur(s,0,n);
	//remove(s);
	return 0;
}

