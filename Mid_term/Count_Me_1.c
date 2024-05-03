#include <stdio.h>
int main() {
      
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
      }
      int count=0,digit=0;
      for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count++;
        }else if(arr[i]%2!=0){
            if(arr[i]%3==0){
                digit++;
            }
        }
      }
      printf("%d %d\n",count,digit);

   return 0;
}
