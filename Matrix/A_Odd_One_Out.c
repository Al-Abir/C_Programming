#include <stdio.h>
int main() {
      
      int t;
      scanf("%d",&t);
      for(int i =1; i<=t; i++){

      int a,b,c;

      scanf("%d %d %d",&a,&b,&c);

      if(a!=b && a!=c){
        printf("%d\n",a);
      }else if(b!=a && b!=c){
        printf("%d\n",b);
      }else{
        printf("%d\n",c);
      }

      }
     
   return 0;
}
