//natural number start from 1
#include<stdio.h>
int main() {
    int number;
    
    printf("enter number\n");
    scanf("%d",&number);
    
    if(number>=1)
    {
       printf("number is natural:");
    }
    else
    {
      printf("number is not natural:");
    }
    return 0;
}