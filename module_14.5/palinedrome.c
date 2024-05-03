#include <stdio.h>
int main() {
      int n;
      scanf("%d",&n);
      int k;
      for(int i =1; i<=n; i++){
        //space 
        for(int j =1; j<=n-i; j++){
            printf(" ");
        }
        // bam side the print dreasing order
        for( k =i;k>=1; k--){
            printf("%d",k);
        }

        for(k =k+2; k<=i;k++)
          {
            printf("%d",k);
          }
          printf("\n");
      }
   return 0;
}
