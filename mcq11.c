#include<stdio.h>
int main()
{
	int x = 4;
	int *p = &x;
	int *k =  p++;
	printf("%d\n", k);
	printf("%d\n", p);
	int r = p-k;
	printf("%d", r);
}
