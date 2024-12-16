#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int word=0;
    c=getchar();
    while(c!='\n'){
        while(c==' ')
            c=getchar();
        if(c!='\n'){
            word++;
            do{
                c=getchar();
            }while(c!='\n'&&c!=' ');
        }
    }
    printf("There are %d words in the line\n",word);
    return 0;
}
