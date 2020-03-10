#include<stdio.h>
int main()
{
	int x=3, y=0;
	int a=1;
	int z;
	z = (y++, y, x, a);
	printf("%d\n", z);
	return 0;
}
