#include <stdio.h>
int panda[101] = { 1, 1, 1, 1, 2 };
/**********Begin**********/

int CP(int n){
    if(n < 5){
        return n > 0 ? 1 : 0;
    }
    if(panda[n]!=0){
        return panda[n];
    }
    panda[n]=(CP(n-1)+CP(n-2)+CP(n-3)+CP(n-4)+CP(n-5))%(107+7);
    return panda[n];
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",CP(n));
    return 0;
}

/**********End**********/
