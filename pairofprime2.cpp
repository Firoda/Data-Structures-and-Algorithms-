#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

bool* sieve(bool *prime, int n)
{
    memset(prime, true, sizeof(prime));
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p] == true)
        {
            for(int j=p*p; j<=n; j = j+p)
                    prime[j] = false;
        }
    }
    return prime;
}
int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int N;
	    cin >> N;
	    vector<int> v,w;
	    bool prime[N+1];
	    bool *res = sieve(prime, N);
	    for(int i=2;i<=N;i++)
	    {
	        if(res[i])
	        {
	           v.push_back(i);
	           w.push_back(i);
	        }
	    }
	    
	    for(int i=0;i<v.size();i++)
		cout << v[i]<<" ";
	
		cout << "\n\n\n";
	    
	    for(int i=0;i<v.size();i++)
	    {
	        for(int j=0;j<w.size();j++)
	        {
	            if(v[i]*v[j]<=N)
	               cout << v[i] << " "<< w[i]<<" ";
	        }
	    }
	    cout << "\n"; 
	}
	return 0;
}
