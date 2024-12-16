#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    while(i<=15)
        if(++i%3!=2)continue;
        else printf("%d  ",i);
        printf("\n");
    return 0;
}
