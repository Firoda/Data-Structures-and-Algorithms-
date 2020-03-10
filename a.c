
#include <stdio.h>

int main() {
    
    for(int i = 0, j = 0; j <= i; j += (i + j)){
   	 
    	printf("%d ", i + j);
   	 
    }
    
    return 0;
}
