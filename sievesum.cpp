#include <iostream>
#include <string.h>
using namespace std;

unsigned long long int sievesum(int n)
{
    unsigned long long int sum = 0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(int p=2; p*p<=n;p++)
    {
        if(prime[p] == true)
        {
            for(int i=p*p;i<=n;i+=p)
                prime[i] = false;
        }
    }
    for(int i=2;i<=n;i++)
        if(prime[i])
            sum+=i;
    return sum;
}

int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    unsigned long long int sum = sievesum(n);
	    cout << sum << "\n";
	}
	return 0;
}
