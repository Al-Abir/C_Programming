#include <stdio.h>
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
    
}
int main() {
      int n;
      scanf("%d",&n);
      int a = fibo(n);
      printf("%d\n",a);
      for(int i =0; i<n; i++){

         int ans = fibo(i);
         printf("%d ",ans);
      }
   return 0;
}
