#include <stdio.h>
#include<string.h>
int main() {
      int n;
      scanf("%d",&n);
      int arr1[n],arr2[n];
      for(int i =0; i<n; i++){
        scanf("%d",&arr1[i]);
      }
    //    for(int i =0; i<n; i++)
    //    {
    //        printf("%d", arr1[i]);
    //    }
    //    printf("\n");
    //   //cpy
    //   for(int i =0; i<n; i++){
    //        arr2[i]=arr1[i];
    //   }
    //    for(int i =0; i<n; i++)
    //    {
    //        printf("%d", arr2[i]);
    //    }
    //    printf("\n");
    memcpy(arr2,arr1,n *sizeof(int)); // calculate total size of array bytes;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

   return 0;
}
