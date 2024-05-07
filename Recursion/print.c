#include <stdio.h>
void fun(int n,int i){
    // base case 
    if(i>n){
        return;
    }else{
        printf("%d\n",i);
        fun(n,i+1);
    }
}
int main() {
      int n;
      scanf("%d",&n);
      fun(n,1);
   return 0;
}
