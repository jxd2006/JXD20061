#include <stdio.h>
int Judgement(int a,int b,int c);
int main()
{
    int y=0,m=0,d=0;
    scanf("%d %d %d",&y,&m,&d);
    if(Judgement(y,m,d)==1)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}

int Judgement(int a,int b,int c){
    int flag=1;
    if(a%4==0||a%400==0){
        if(b==2){
            if(c>0&&c<=29)
            return flag;
            else{
                flag=0;
            return flag;
        }
    }
    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
        if(c>0&&c<=31)
        return flag;
        else{
            flag=0;
            return flag;
        }
    }
    else{
        if(c>0&&c<=30)
        return flag;
        else{
            flag=0;
            flag=1;
        }
    }
}
}







