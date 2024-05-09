#include <stdio.h>
#define MAX_SIZE 50
#include<string.h>
int main() {
      char a[MAX_SIZE]="Hello";
      char b[MAX_SIZE]="Hllo";

      int result = strcmp(a,b);
      if(result==0){
        printf("Equal\n");
      }else{
        printf("String are not Equal\n");
      }
   return 0;
}