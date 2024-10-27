#include<stdio.h>

int main()
{
    int count=0;
    char s[81];
    while (fgets(s,81,stdin)!=NULL)
        count++;
    printf("ÐÐÊý:%d\n",count);
    return 0;
}
