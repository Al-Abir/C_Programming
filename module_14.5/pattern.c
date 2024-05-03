// ***
// **
// *

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    // for(int i =1; i<=n; i++){
    //    for(int j =n; j>=i;j--){
    //      printf("*");
    //    }
    //    printf("\n");
    // }

        for(int i = n; i >= 1; i--) { // Loop from n down to 1
        for(int j = 1; j <= i; j++) { // Loop from 1 to n
            printf("*");
        }
        printf("\n");
    }
     
   return 0;
}
