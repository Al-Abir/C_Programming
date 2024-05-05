#include <stdio.h>
void fun(int i){
    // base case 
    if(i==51){
        return;
    }else{
        printf("%d\n",i);
        fun(i+1);
    }
}
int main() {
      fun(10);
   return 0;
}
