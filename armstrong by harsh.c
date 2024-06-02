#include<stdio.h>
int main() {
    int number,rem,sum=0,temp;
    
    printf("enter number\n");
    scanf("%d",&number);
    temp=number;
    while(number)
    {rem=number%10;
    sum=sum+(rem*rem*rem) ;
    number=number/10;
    }
    if(temp==sum)
    {
       printf("number is Armstrong\n");
    }
    else 
    {
      printf("number is not Armstrong\n");
    }
    
    return 0;
}