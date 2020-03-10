#include<iostream>
using namespace std;

int main()
{
	int arr[] = {5,6,-4,-2,8,10};
	int n = 6;
	
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		int sub_arr =  0;
		for(int j=i;j<n;j++)
		{
			sub_arr+=arr[j];
		}
		if(sub_arr == 0)
		{
			flag = true;
			break;
		}
	}
	cout << flag << endl;
}
