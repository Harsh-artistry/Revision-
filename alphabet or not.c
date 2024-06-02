//alphabet or not
#include<stdio.h>
int main() {
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    
    if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z') )
    { 
      printf("ch is alphabet:%c",ch);
    }
    else
    {
    printf("ch is not alphabet:c",ch);
    }
    return 0;
    }
   