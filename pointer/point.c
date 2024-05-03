#include <stdio.h>
int main() {
      int x =29;
      int *p = &x; 
      int *p2 =p; 
      *p2=10;
      printf("%p\n",&x);
      printf("%p\n",p);
      printf("%p\n",p2);

      printf("%d\n",x);
      printf("%d\n",*p);
      printf("%d\n",*p2);
      printf("hello\ btyye");

   return 0;
}
