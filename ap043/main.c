//4.9��չ
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char number[100];
    printf("����һ������:");
    scanf("%s",number);
    int length=0;
    while(number[length]!='\0')
    {
        length++;
    }
    printf("������֣�");
    for(int i=length-1;i>=0;i--)
    {
        printf("%c",number[i]);
    }
    printf("\n");
    return 0;
}
