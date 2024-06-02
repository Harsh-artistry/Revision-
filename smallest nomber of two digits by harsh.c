#include<stdio.h>
int main() {
    int a,b;
    printf("enter a\n");
    scanf("%d",&a);

    printf("enter b\n");
    scanf("%d",&b);

    if(a<b)
    {
        printf("a is small:%d",a);
    }
    else
    {
        printf("b is small:%d",b);
    }

    return 0;
}
