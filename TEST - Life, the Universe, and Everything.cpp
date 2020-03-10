#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = *a;
}
void selectionsort(int a[],int n)
{
	int min;
	for(int i=0;i<n-1;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]< a[min])
			min = j;
		}
		swap(&a[min],&a[i]);
	}
}
int arraylength(int *c)
{
	return sizeof(c)/sizeof(c[0]);
}

int main()
{
	int a[200],b,count=0;
	while(b!=42)
	{
		cin >> b;
		a[count] = b;
		count++;
	}
	int len = arraylength(a);
	cout << len<<"\n"; 
	len = 4;
	for(int j= 0;j<4;j++)
	{
		cout << a[j]<<" ";
	}
	selectionsort(a,len);
	for(int i=0;i<len;i++)
	{
		cout<<a[i];
		cout << "\n";
	}
	
	return 0;
}
