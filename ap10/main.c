#include <stdio.h>
//���ڴ�������Ĵ��룬���ӳ��������Dev C++�����е��Ժ����ύ
#include <math.h>

int main()
{
    int N;
    int A=0,B=0;
    int a=0,b=0;
    scanf("%d %d",&A,&B);
    for(N=1;N<=10000;N++){
        a=A+N;
        b=B+N;
        if(sqrt(a)-(int)sqrt(a)==0&&sqrt(b)-(int)sqrt(b)==0)
            printf("%d",N);
            break;
        }
        else{
            printf("Not found!\n");
            break;
        }
    }
    return 0;
}






































