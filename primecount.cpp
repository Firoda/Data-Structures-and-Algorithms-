#include <bits/stdc++.h>

using namespace std;
int primeCount(long n) {
   long long int prime[] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47};
   long long int product = 1;
    int ans = 0;
    for(int i=0;i<=15;i++)
   {
      product = product * prime[i];
      cout << product<< endl;
        if(product <= n)
            ans++;
        else
            break;
   }
    return ans;
}


int main()
{
	long a = 1;
	cout << primeCount(a);
	return 0;
}
