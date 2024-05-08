#include <stdio.h>
int check_prime(int num, int i){
    if(num==0||num==1){
        return 1;
    }
    if(num==i){
        return 0;
    }else if(num%i==0){

           return 1;
    }else{
        return check_prime(num,i+1);
    }
}
int main() {
      int num;
      scanf("%d",&num);

      if(check_prime(num,2)==0){
        printf("Prime number\n");
        }else{
            printf("Not Prime number\n");
        }
   return 0;
}
