#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
      char s[100];
      fgets(s,100,stdin);
      int i,ch;

      for(i=0; s[i]!='\0'; i++){
        ch = islower(s[i]) ?  toupper(s[i]) : tolower(s[i]);
        putchar(ch);
      }
      printf("\n");
   return 0;
}
