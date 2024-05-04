#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main() {
        char text1[MAX_SIZE];
        char text2[MAX_SIZE];
       
        char* str1 = text1;
        char* str2 = text2;

         while(*(str2++) = *(str1++));

        printf("%s",text2);

   return 0;
}
