//greatest number among three
#include<stdio.h>
int main() {
    int a, b, c ;
    printf("enter a, b,c\n");
    scanf("%d%d%d",&a,&b,&c,a,b,c);
    
    if(a>=b && a>=c)
    { 
    printf("a is greater");
    }
    if(b>=a && b>=c)
    {
     printf("b is greater");
    }
    if(c>=a && c>=b)
    {
    printf("c is greater");
    }
    return 0;
    
    }