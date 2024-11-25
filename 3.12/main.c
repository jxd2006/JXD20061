#include <stdio.h>
int Judgement(int a,int b,int c);
int P(int num);
int main()
{
    int y=0,m=0,d=0,date=0;
    scanf("%d",&date);
    y=date/10000;
    m=(date%10000)/100;
    d=date%100;
    if(Judgement(y,m,d)==1){
        if(P(date)){
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
    else
    printf("NO\n");
    return 0;
}

int P(int num) {
    int reversed = 0, original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return (original == reversed);
}

int Judgement(int a,int b,int c){
    int flag=1;
    if((a%4==0&&a%100!=0)||a%400==0){
        if(b==2){
            if(c>0&&c<=29)
            return flag;
            else{
                flag=0;
            return flag;
        }
    }
    }
    else{
    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
        if(c>0&&c<=31)
        return flag;
        else{
            flag=0;
            return flag;
        }
    }
    else if(b==2){
        if(c>0&&c<=28)
        return flag;
        else{
            flag=0;
            return flag;
        }
    }
    else if(b>12||b<0){
        flag=0;
        return flag;
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

