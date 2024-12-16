#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20]="azdwgtjqmn";
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        str[i]+=4;
        if(str[i]>'z')str[i]-=26;
        count++;
    }
    printf("str[%d]=%s\n",count,str);
    return 0;
}
