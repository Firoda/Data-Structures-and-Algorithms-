#include<iostream>
using namespace std;
bool palindrome(int arr[], int n)
{
	bool pal = true;
	for(int i=0;i<=n;i++)
	{
		if(arr[i] != arr[n-i-1])
			pal = false;
	}	
	return pal;
}
bool notallelements(int arr[], int n)
{
	bool all = true;
	int num[] = {1,2,3,4,5,6,7,8};
	for(int i=0;i<n;i++)
	{
		num[arr[i]] = 0; // Set all values to zero
	}	
	//Now check for any non-zero entry
	for(int i=0;i<8;i++)
	{
		if(num[i] != 0)
			all = false;
	}
	
	return all;
}


int main()
{
	int test,n,temp;
	bool wrong = 0;
	cin >> test;
	while(test--)
	{
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			if(temp>=1 && temp<=8)
				arr[i] = temp;
			else
				wrong = 1;
		}
	if(!palindrome(arr, n))
		wrong = 1;
	if(!notallelements(arr, n))
		wrong = 1;
	
	if(wrong == 0)
		cout << "yes" << "\n";
	else
		cout << "no" << "\n";	
	
	}
	return 0;
}
