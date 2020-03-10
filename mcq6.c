#include <stdio.h>

int main()

{

int a = 2;

int b = 0;
//
//int y = (b == 0) ? a :(a > b) ? (b = 1): a;
int y = (b == 0) ? a :(a > b);
printf("%d\n", y);

}


