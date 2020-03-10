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
	    cin >> n;
	  	int count=0;
	    for(int i=1;i<=n;i++)
	    {
	        int b3 = n-pow(i,3);
	        int b;
	        if(b3>0)
	        	 b = pow(b3,1/3);
	        else
	        	 b = 0;
	        if(b>=0)
	            if(pow(i,3)+pow(b,3) == n)
	                count++;
	    }
	    cout << count <<"\n";
	   
	}
	return 0;
}
