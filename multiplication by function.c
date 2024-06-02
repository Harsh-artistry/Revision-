//multiplication
#include<stdio.h>
int mul(int a, b);  // decleration

int main() {
    int a, b;
    printf("enter a\n");
    scanf("%d",&a);   
    printf("enter b\n");
    scanf("%d",&b);

    printf("multiply is:%d",mul(a,b));// function call


    return 0;
}

int mul(int a, b) {    // funtion defination
    return a*b;
}
