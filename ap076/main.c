//��������еĵ��ʸ���
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int word=0,lastchar=1;
    printf("������һ���ַ�:\n");
    while((c=getchar())!='\n'){
        if(c==' ')
            lastchar=1;
        else{
            if(lastchar){
                word++;
                lastchar=0;
            }
        }
    }
    printf("�����ַ��й���%d������.\n",word);
    return 0;
}
