#include<stdio.h>

int main()
{
	int x=3;//,y=2;
	const int *p = &x;
	printf("%d\n", *p);
	*p++;
	printf("%d\n", *p);
	return 0;
}

