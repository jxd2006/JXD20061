//�����⽫һ����Ǯ������һ�ǣ�����5�֡�2�ֺ�1�ֵ�Ӳ��
//�м��ֲ�ͬ�Ļ�����Ҫ��ÿ��Ӳ��������һö����
//Ҫ��������ÿһ��⡣

#include <stdio.h>
int main(){
    int money,count=0;
    int i,j,k;
    printf("������һ��Ǯ(��λΪ��):");
    scanf("%d",&money);
    for(i=1;i<=money/5;i++){
        for(j=1;j<=money/2;j++){
            for(k=1;k<=money-5-2;k++){
                if(5*i+2*j+k==money){
                    count++;
                    printf("����%d:5��%dö��2��%dö��1��%dö\n",count,i,j,k);
                }
            }
        }
    }
    return 0;
}
