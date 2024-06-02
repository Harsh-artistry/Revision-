// simple interest
#include<stdio.h>
int main() {
    int principal, rate, time;
    printf("enter principal");
    scanf("%d",&principal);
    
    printf("enter rate");
    scanf("%d",&rate);
    
    printf("enter time");
    scanf("%d",&time);
    
    printf("simple interest is : %d", principal*rate*time);
    return 0;
}