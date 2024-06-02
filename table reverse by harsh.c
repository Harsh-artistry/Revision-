//table input by user
#include<stdio.h>
int main() {
    int number;
    printf("enter number\n");
    scanf("%d",&number);
    
    for(int i=10;i>=1;i--)
      {  printf("table is:%d \n",number*i);
    }
    return 0;
    }