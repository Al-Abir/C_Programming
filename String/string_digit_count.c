#include <stdio.h>
#define MAX_SIZE 100
int main() {
      char a[100];
      fgets(a,MAX_SIZE,stdin);

       int alp, digit, sp, i;
       alp=digit=sp=i=0;

       while(a[i]!='\0'){
              if((a[i]>='a'&& a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                alp++;
              }
              else if(a[i]>='0'&& a[i]<='9'){
                digit++;
              }else{
                 sp++;
              }
              i++;

       }
       printf("Alphabet: %d\n",alp);

       printf("Digit: %d\n",digit);

       printf("Special Char: %d\n",sp);


   return 0;
}
