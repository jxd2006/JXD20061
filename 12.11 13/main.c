#include <stdio.h>
int main()
{
    char arr[51];
    scanf("%50s",arr);
    char *p=arr;
    for(int i=0;*(p+i)!='\0';i++){
        for(int j=i;*(p+j)!='\0';j++){
            printf("%c",*(p+j));
        }
        printf("\n");
    }
    return 0;
}
