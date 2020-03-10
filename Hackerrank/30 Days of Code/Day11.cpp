#include<iostream>
using namespace std;
int main()
{
	int arr[6][6],count = 0, temp = 0;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin >> arr[i][j];
		}
	}
	int h_sum[16]= {0};
	// Main Logic
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
			h_sum[count] = temp;
			temp  = 0;
			count++;
		}
	}
	
	
	
	
	int max = h_sum[0];
	for(int i=0;i<16;i++)
	{
		if(h_sum[i]>max)
			max = h_sum[i];
	}
	cout << max << endl;
	return 0;
}
