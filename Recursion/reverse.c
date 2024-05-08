#include <stdio.h>
#define MAX_SIZE 50
void reverse(char arr[],int index){
         if(arr[index]=='\0'){
            return;
         }
         reverse(arr,index+1);
         printf("%c",arr[index]);
    
       
}
int main() {
      char arr[MAX_SIZE];
      fgets(arr,MAX_SIZE,stdin);
      printf("Orjinal: %s",arr);
      printf("\n");
      printf("Reverse: ");
      reverse(arr,0);
      
   return 0;
}
