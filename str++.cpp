#include<iostream>
using namespace std;
void remove(char *str)
{
	int i=0;
	while(i<7)
	{
		cout << str << endl;
		str++;
		i++;
	}
}
// asdf jkl asdf jkl asdfjk
int main()
{
	char s[] = "Abcdefghijkl";
	char *q = s;
	int i=0;
	while(i<7)
	{
		cout << q << endl;
		q++;
		i++;
	}
	//remove(s);
	return 0;
}
