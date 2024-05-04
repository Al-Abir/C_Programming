#include <stdio.h>
int is_palindrome(char st1[],int len){
        int flag =0;
        for(int i =0; i<len; i++){
            if(st1[i]!=st1[len-i-1]){
               flag=1;
               break;
            }
        }
        return flag;
}
int main() {
      
      char str1[1000];
      scanf("%s",str1);
      int len = strlen(str1);

     int flag = is_palindrome(str1,len);
   if(flag ==0){
    printf("Palindrome\n");
   }else{
     printf("Not Palindrome\n");
   }
   return 0;
}
