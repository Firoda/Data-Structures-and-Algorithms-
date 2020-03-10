#include <iostream>
using namespace std;
unsigned long long int fact(int l)
{
    if(l <= 1)
        return 1;
    return (l*fact(l-1));
}


int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n,r;
	    cin >> n >> r;
	    unsigned long long int npr = fact(n)/fact(n-r);
	    cout << npr << endl;
	}
    
    return 0;
}
