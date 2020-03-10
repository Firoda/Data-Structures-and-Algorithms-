#include<iostream>
using namespace std;

int main() {
	
	int test;
	cin >> test;
	while(test--)
	{
	    unsigned long long int n;
		int a = 0;
	    cin >> n;
	    if(n == 0 || n == 1)
	        a = 1;
	    else if(n == 2)
	        a = 2;
	    else if(n == 3)
	        a = 3;
	    else if(n == 4)
	        a = 4;
	    else
	        a = 0;
	    cout << a << endl;
	}
	return 0;
}

