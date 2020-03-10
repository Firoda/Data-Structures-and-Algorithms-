#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    long long int n,i;
	    cin >> n;
	    unsigned long long int sum = 0;
	    for(i=2;i<=sqrt(n); i++)
	    {
	        if(n%i == 0)
	        {
	            if(n/i == i)
	                sum = sum + i + i;
	            else
	                sum = sum + i + n/i;
	        }
	    }
	    if(sum+1 == n)
	    	cout << 1 << "\n";
	    else
	    	cout << 0 << "\n";
	}
	return 0;
}
