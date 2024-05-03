#include <stdio.h>
int main() {
     int n,a;
     scanf("%d",&n);
     a = n/1000;
     if(a%2==0){
        printf("EVEN\n");

     } else{
        printf("ODD");
     }
   return 0;
}
