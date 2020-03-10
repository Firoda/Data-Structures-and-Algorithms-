#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    int temp;
	    long long int prod = 1;
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp;
	        prod*=temp;
	    }
	    cout << prod << endl;
	}
	return 0;
}
