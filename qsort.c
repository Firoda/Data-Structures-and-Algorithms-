#include <stdlib.h>
 
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
	int first = *(int*)first;
	int second = *(int*)second;
	if(first>second)
		return 1;
	else if(first == second)
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
