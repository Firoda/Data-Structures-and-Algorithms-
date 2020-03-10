#include<stdio.h>
#define FUN(x) x*x
int main()
{
//	int val= 0;
//	val = 128/FUN(8);
//	printf("val =  %d", val);

	int intVar = 24;
	static int x = 010;
	printf("%d, %d", intVar, x);
	return 0;	
}
