#include <stdio.h>
int cube(int n){
    return (n*n*n);
}
int main() {
      int n;
      scanf("%d",&n);
      int c = cube(n);
      printf("%d\n",c);
   return 0;
}
