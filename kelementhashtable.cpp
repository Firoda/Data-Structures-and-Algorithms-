#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    long int N,K;
	    cin>>N>>K;
	    long int A[N];
	    long int max=0;
	    for(long int j=0;j<N;j++)
	    {
	        cin>>A[j];
	        if(A[j]>max)
	        {
	            max=A[j];
	        }
	    }
	    int result=-1;
	    if(K<=N)
	    {
	       int B[max+1];
	       for(long int j=0;j<max+1;j++)
	       {
	           B[j]=0;
	       }
	       for(long int j=0;j<N;j++)
	       {
	           B[A[j]]++;
	       }
	       for(long int j=0;j<N;j++)
	       {
	           if(B[A[j]]==K)
	           {
	               result=A[j];
	               break;
	           }
	       }
	    }
	    cout<<result<<endl;
	}
	return 0;
}
