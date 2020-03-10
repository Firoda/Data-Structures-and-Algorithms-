#include<iostream>
using namespace std;
unsigned long long int factorial(unsigned long long int n)
{
    if(n==0|| n==1)
        return 1;
    return (n*factorial(n-1));
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,r;
	    cin>>n>>r;
	    cout<<factorial(n)/factorial(n-r)<<endl;
	}
	return 0;
}
