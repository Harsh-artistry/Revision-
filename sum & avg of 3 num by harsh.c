/*
#include<stdio.h>
int main() {
    int a,b, c, sum;
    printf("enter a\n");
    scanf("%d",&a);

    printf("enter b\n");
    scanf("%d",&b);
    
    printf("enter c\n");
    scanf("%d",&c);
    
    sum= a+b+c;

    printf("sum of a,b&c is:,%d \n", a+b+c);
    printf("avg is :%d", sum/3);
    return 0;
}
*/
#include<stdio.h>
int main(){
     int a,b,c;
     int sum , avg ;
     sum=a+b+c;
     avg = sum/3;
     
     printf("enter value of b \n");
     scanf("%d", &a);
     
     printf("enter value of b \n");
     scanf("%d",&b);
     
     printf("enter value of c \n");
     scanf("%d", &c);
     
     
     printf("sum of a ,b & c is : \n %d",sum);
     printf("avg of a, b,&c is : \n %d ", avg);
     return 0;
     }
