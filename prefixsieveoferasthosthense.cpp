#include <bits/stdc++.h> 
using namespace std; 

const int MAX = 1000000; 
 
long long int prefix[MAX + 1]; 

 
void buildPrefix() 
{ 
	
	bool prime[MAX + 1]; 
	memset(prime, true, sizeof(prime)); 

	for (long long int p = 2; p * p <= MAX; p++) { 

	
		if (prime[p] == true) { 

			
			for (long long int i = p * 2; i <= MAX; i += p) 
				prime[i] = false; 
		} 
	} 

	
	prefix[0] = prefix[1] = 0; 
	for (long long int p = 2; p <= MAX; p++) { 
		prefix[p] = prefix[p - 1]; 
		if (prime[p]) 
			prefix[p] += p; 
	} 
} 


long long int sumPrimeRange(int L, int R) 
{ 
	return prefix[R] - prefix[L - 1]; 
} 

int main()
{
	int test;
	cin >> test;
	buildPrefix(); 
	while(test--)
	{
		int n;
		cin >> n;
		cout << sumPrimeRange(0,n) << endl;
	}
	return 0;
}
