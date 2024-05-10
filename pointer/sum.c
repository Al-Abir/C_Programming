#include <stdio.h>
int main() {
      int num1, num2;
      scanf("%d %d",&num1, &num2);

      int* p;
      int* p2;
      p = &num1;
      p2 =&num2;

      int sum,sub,mul,div;

      sum = *(p)+*(p2);   // num1 =p
      sub = *(p)-*(p2);

      printf("%d %d ",sum,sub);
         return 0;
}
