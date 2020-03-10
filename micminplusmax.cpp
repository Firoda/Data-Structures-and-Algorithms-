#include<iostream>
using namespace std;
int min(int input1, int input2[])
{
	int min = input2[0];
	int max = input2[0];
	for(int i=0;i<input1;i++)
	{
		if(input2[i] < min)
			min = input2[i];
	    if(input2[i] > max)
			max = input2[i];
	}
	cout << max+min;
	return 0;
}
int main()
{
	int input = 7;
	int arr[] = {9,5,3,11,54,2,4};
	min(input, arr);
	return 0;
}
