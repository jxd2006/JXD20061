#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  float score;
      scanf("%f",&score);
      if(score<=100&&score>=90)
      {printf("A\n");}
      else if(score<90&&score>=80){
      printf("B\n");}
      else if(score<80&&score>=70){
      printf("C\n");}
      else if(score<70&&score>=60){
      printf("D\n");}
      else if(score<60&&score>=0){
      printf("E\n");}
      else
        printf("Score is error!\n");


	  /*********End**********/
       return 0;
	}
