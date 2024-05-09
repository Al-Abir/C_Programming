#include <stdio.h>
#define MAX_SIZE 50
int main() {
      char a[MAX_SIZE]="Hello";
      char b[MAX_SIZE]="Hello";

      int flag =1;// means equal;

      int i=0;
      int j=0;

      while(a[i]!='\0'||b[i]!='\0'){
             if(a[i]!=b[i]){
                flag=0;
             }
             i++; 
             j++;

      }
      if(flag ==0){
        printf("Not equal\n");
      }else{
        printf("Equal\n");
      }
   return 0;
}
