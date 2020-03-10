    
#include <stdio.h>
#include <unistd.h>

const char rocket[] =
"           _\n\
          /c\\\n\
          |+|\n\
          |+|\n\
          | |\n\
          |P|\n\
          |R|\n\
          |O|\n\
         /|J|\\\n\
        / |E| \\\n\
       |  |C|  |\n\
       |  |T|  |\n\
        `-\"\"\"-`\n\
";

int main()
{
	
    for(int i = 0; i < 50; i ++) printf("\n");
    printf("%s", rocket);
    int j = 300000;
    for (int i = 0; i < 50; i ++) {
        usleep(j);
        j = (int)(j * 0.9);
        printf("\n");
    }
    printf("Test01\n");
        return 0;
}s
