#include <stdio.h>
int main() {
     int t;
     scanf("%d",&t);
     for(int i=0; i<t; i++){
         
         int n;
         scanf("%d",&n);
         int arr[n];

         for(int i =0; i<n; i++){
            scanf("%d",&arr[i]);
    
         }
         int find;
         scanf("%d",&find);
         int found =0;
         for(int j = 0; j < n; j++) {
            if(arr[j] == find) {
                found = 1;
                break;
            }
        }
        if(found){
            printf("YES\n");
        }else{
            printf("NO\n");
          }
         }
         return 0;
       }
    

