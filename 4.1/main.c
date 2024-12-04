#include <stdio.h>
void Rua();
int main() {
    int first=-1;
	Rua(first);//µ÷ÓÃµÝ¹éº¯Êý
	return 0;
}

void Rua(int last) {
	/**********Begin**********/
    int num;
    if (scanf("%d", &num) == 1) {
        Rua(num);
    }
    if (last != -1) {
        printf("%d\n", last);
    }



	/**********End**********/
}
