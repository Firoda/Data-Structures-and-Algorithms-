#include<iostream>
#include <stack>
using namespace std;
int main()
{
	int n, remainder, count=0,temp=0;
	stack <int> bin;
	cin >> n;
	int arr[100] = {0};
	while(n>0)
	{
		remainder = n%2;
		n = n/2;
		bin.push(remainder);	
	}
// This is where the trouble began	
	while(!bin.empty())
	{
		if(bin.top() == 1)
		{
			temp++;
		}
		else if(bin.top() == 0)
		{
			if(count<=temp)
				count = temp;
			temp = 0;
		} 
		bin.pop();
		
		
	}
	if(count<temp)
		count = temp;
	cout << count << endl;
	return 0;
}
