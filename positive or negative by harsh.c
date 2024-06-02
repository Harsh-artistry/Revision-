//positive or negative
#include<stdio.h>
int main() {
    int number;
    printf("enter number\n");
    scanf("%d",&number);
    
    if(number>=0)
    { 
      printf("number is positive");
    }
    else
    {
      printf("number is negative");
    }
    return 0;
}