//roots of quadratic equation
#include<stdio.h>
int main() {
    int a, b, c, root1, root2;
    printf("enter a, b, c\n");
    scanf("%d%d%d",&a,&b,&c,a,b,c);
    int discriminant;
    discriminant=b*b-4*a*c;
    
    printf("root1 is:%d\n",(-b+discriminant)/2*a);
    printf("root2 is:%d",(-b-discriminant)/2*a);
    return 0;
    }