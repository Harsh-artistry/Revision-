//use of else if
#include<stdio.h>
int main() {
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    
    if(age>=18)
    {    printf("adult\n");
    }
    else if(age>=13)
    {    printf("teenager\n");
    }
    else
    { printf("child");
    }
    return 0;
}
    