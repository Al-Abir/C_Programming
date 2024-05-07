#include <stdio.h>
int main() {
      int n;
      scanf("%d",&n);
      int arr[n][n];
      for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
                scanf("%d",&arr[i][j]);
        }
      }
      int flag =1;
      for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
                if(i==j){
                    continue;
                }else if (arr[i][j]!=0){
                    flag =0;
                }
        }
       
      }
      if(flag==0){
        printf("Not Diagonal\n");
      }else{
        printf("Diagonal\n");
      }
   return 0;
}
