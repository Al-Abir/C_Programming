#include <stdio.h>
#include<string.h>
int main() {
      char s[10001];
      scanf("%s",s);
      int cunt[26]={0};
      for(int i=0; i<strlen(s);i++){
        int value = s[i]-97;
        cunt[value]++;

      }
      for(int i =0; i<26; i++){
         if(cunt[i]!=0){
            printf("%c - %d\n",i+'a',cunt[i]);
         }
      }
      
   return 0;
}