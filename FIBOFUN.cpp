#include<iostream>
using namespace std;
/*long int fibonacci(long int a,long int b,long int fibn, long int sum)
{
	if(fibn == 0)
		sum += a;
	else if(fibn == 1)
		sum+= b;
	sum+=fibonacci(a,b,fibn-1,sum)+fibonacci(a,b,fibn-2,sum);
	return sum;
}*/





int main()
{
	int test;
	long int a,b,fibn,modl;
	static long int sum=0;
	long int arr[100000] = {NULL};
	cin >> test;
	while(test--)
	{
		sum = 0;
		cin >> a >> b >> fibn >> modl;
		//cout << fibonacci(a,b,fibn,sum)%modl<<endl;
		arr[0] = a;
		arr[1] = b;
		for(int i=2;i<=100000;i++)
			arr[i] = arr[i-1]+arr[i-2];
		for(int i=0;i<=fibn-1;i++)
			{sum += arr[i];
			sum = sum %modl;
		}
			
		//sum = sum % modl;
		
		cout << sum << endl;
	}
	return 0;
}
