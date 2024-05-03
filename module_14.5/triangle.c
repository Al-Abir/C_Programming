#include <stdio.h>
int main() {
      int n;
      scanf("%d", &n);
      int px=n;
      int py=n;
      for(int i =1; i<=n; i++){
        for(int j=1; j<n*2;j++){
            if(j>=px && j<=py){
                printf("*");
            }else{
                printf(" ");
            }
        }
        px--;
        py++;
        printf("\n");
      }
      
   return 0;
}

