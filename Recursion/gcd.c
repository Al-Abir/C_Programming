#include <stdio.h>
int gcd_1(int a, int b){
    if(b==0){
        return a;
    }else{
        return gcd_1(b,a%b);
    }
}
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2) ; 

    int gcd = gcd_1(num1,num2);
    int lcm = (num1*num2)/gcd;
    printf("%d\n",gcd);
    printf("%d\n",lcm);
   return 0;
}
