#include <stdio.h>
int main() {
      int n;
      scanf("%d",&n);
      int arr[n];

      for(int i =0; i<n; i++){
           scanf("%d",&arr[i]);
      }
      printf("array input : ");
      for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
      }
      printf("\n");

       // Reverse Array
       for(int j = n-1; j>=0; j--){
          printf("%d ",arr[j]);
       }
          printf("\n");
   return 0;
}
