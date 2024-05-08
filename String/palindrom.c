#include <stdio.h>
#include<string.h>
int main() {
      char a[100],b[100];
      scanf("%s",&a);
      strcpy(b,a);
      //int flag =1;
      int i =0, j=strlen(b)-1;
      while(i<j){
        /*if(arr[i]!=arr[j]){
               flag=0;
        }*/
        char temp = b[i];
          b[i]= b[j];
          b[j]=temp;
          i++;
          j--;
      }
      printf("%s",b);
   return 0;
}
