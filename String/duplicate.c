#include <stdio.h>
int main() {
      char str[100];

      fgets(str,100,stdin);
      
      for(int i =0; str[i]!='\0';i++){
        //hello
           for(int j = i+1; str[j]!='\0';j++){
            if(str[i]==str[j]){
                for(int k =j; str[k]!='\0';k++){
                       str[k]= str[k+1];
                }
            }
           }
      }
      printf("%s",str);
   return 0;
}
