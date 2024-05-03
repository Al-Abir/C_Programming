#include <stdio.h>
int main() {

    int taka;
    scanf("%d",&taka);
    if(taka>=1000){
      printf("Gucci Bag\n");
      if(taka>=2000){
        printf("Gucci Belt\n");
      }
    }else if(taka>=500){
      printf("levis bag\n");
    }else{
      printf("Something Else\n");
    }
    
    return 0;
}
