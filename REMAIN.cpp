#include<iostream>
using namespace std;
int main()
{
	int test,m,n;
	cin >> test;
	while(test-- >0)
	{
		cin >> n >> m;
		int result = n%m;
		if(result%2 == 0)
			cout << "EVEN"<<endl;
		else
			cout << "ODD"<< endl;
	}
	return 0;
}
