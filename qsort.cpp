#include <stdlib.h>
#include<iostream>
using namespace std;

//int int_sorter( const void *first_arg, const void *second_arg )
//{
//    int first = *(int*)first_arg;
//    int second = *(int*)second_arg;
//    if ( first < second )
//    {
//        return -1;
//    }
//    else if ( first == second )
//    {
//        return 0;
//    }
//    else
//    {
//        return 1;
//    }
//}

int sorter(const void *first, const void* second)
{
	int first1 = *(int*)first;
	int second1 = *(int*)second;
	if(first1>second1)
		return 1;
	else if(first1 == second1)
		return 0;
	else
		return -1;	
}
 
int main()
{
    int array[10];
    int i;
    for ( i = 0; i < 10; ++i )
    {
        array[ i ] = 10 - i;
    }
    qsort( array, 10 , sizeof( int ), sorter );
    for ( i = 0; i < 10; ++i )
    {
        printf ( "%d\n" ,array[ i ] );
    }
 
}
