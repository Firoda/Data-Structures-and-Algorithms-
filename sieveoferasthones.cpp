#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define MAX = 10000
int main()
{
	// Number given 20
	int n = 200;
	bool arr[200+1] = {true};
	memset(arr, true, sizeof(arr));
	arr[0] = false;
	arr[1] = false;
	
	for(int i=2;i<=sqrt(n);i++)
	{
		if(arr[i] == true)
		{
			for(int j=i*i; j<=n;j+=i)
				arr[j] = false;
		}
	}
	
	 for(int i=0;i<=100;i++)
	{
		if(arr[i])
			cout << i << " ";
	} 
	return 0;
}
