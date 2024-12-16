#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int day = 0;
    float s = 0;
    for(i=2;i<=100;i*=2)
    {
        day ++;
        s=s+0.8*i;
    }

   printf("%f",s/day);
   return 0;
}
