//areas 
#include<stdio.h>
int square(int side);
int rectangle(int l, int b); //decleration

int main() {
    int side,l, b;
    printf("enter side\n");
    scanf("%d",&side);
    
    printf("enter l&b\n");
    scanf("%d%d",&l,&b);
    
      
    
    printf("square area is:%d\n",square(side));
    printf("rectangle area is:%d\n", rectangle(l, b));
    
    
    
  return 0;

     }
    int square(int side){
      return side*side;
    }
    
    int rectangle(int l, b){
        return l*b;
    }
   
    