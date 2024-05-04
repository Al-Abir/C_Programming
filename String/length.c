#include <stdio.h>
#define MAX_SIZE 100
int main() {
      char text[MAX_SIZE];
      int count =0;
       fgets(text,MAX_SIZE,stdin);

       for(int i =0;   text[i]!='\0' ;i++){
              count++;           
       }  

     printf("%d\n",count);
   return 0;
}
