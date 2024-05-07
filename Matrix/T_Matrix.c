
#include <stdio.h>
#include<stdlib.h>
int main() {
      int n;
      scanf("%d", &n);
      int arr[100][100];
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
              scanf("%d",&arr[i][j]);

        }   
    }
    int sum =0;
    int sum2 =0;

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
              if(i==j){
                   sum +=arr[i][j];
                }
              if(i+j==n-1){
                    sum2+= arr[i][j];
                }
              }
              
        }
        int ans = abs(sum-sum2);
        printf("%d\n", ans);


  return 0;
}
    


  
