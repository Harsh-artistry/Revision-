//cube of numbers
#include<stdio.h>
int cube(int number);

int main() {
    int number;
    printf("enter number\n");
    scanf("%d",&number);

    printf("cube is:%d",cube(number));
    return 0;
}

int cube(int number) {
    return number*number*number;
}
