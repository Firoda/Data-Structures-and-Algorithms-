#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test --> 0)
	{
		int cities,result = 1,temp;
		cin >> cities;
		cities = cities - 1;
		for(int i=1;i<=cities;i++)
		{
			cin >> temp;
			result = (result*temp)%1234567;	
		}		
		
		cout << result << "\n";
	}
	return 0;
}
