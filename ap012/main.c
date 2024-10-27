#include<stdio.h>

int main()
{
    int i=0;
    char s[81];
    gets(s);
    while (s[i]!='\0')
        i++;
    printf("×Ö·û´®³¤¶ÈÎª%d\n",i);
    return 0;
}
