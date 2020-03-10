#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    int number;
	    int total = 0;
	    cin >> n;
	    while(n > 0)
	    {
	       number = n%10;
	       total += pow(number, 3);
	       n = n/10;
	    }
	    if(total == n)
	        cout << "Yes"<<endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}

