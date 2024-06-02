//switch
#include<stdio.h>
#include<math.h>
int main() {
    int day; //1-mon, 2-tue...
    printf("enter day(1-7)\n");
    scanf("%d",&day);

    switch(day) {
    case 1 :
        printf("monday\n");
        break;
    case 2 :
        printf("Tuesday\n");
        break;
    case 3 :
        printf("Wednesday\n");
        break;
    case 4 :
        printf("Thursday\n");
        break;
    case 5 :
        printf("Friday\n");
        break;
    case 6 :
        printf("Saturday\n");
        break;
    case 7 :
        printf("sunday\n");
        break;
    }
    return 0;
}