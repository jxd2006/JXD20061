#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=123;
    float b=456.78;
    double c=-123.45678;
    printf("%u %-10.3f %-10.3e\n",a,b,c);
    return 0;
}
