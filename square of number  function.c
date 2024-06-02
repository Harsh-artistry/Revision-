//square of number
#include<stdio.h>

int square(int number);
int main() {
    int number;
    printf("enter number\n");
    scanf("%d",&number);
    
    printf("square is :%d",square(number));
    return 0;
}
    int square(int number){
    return number*number;
    }