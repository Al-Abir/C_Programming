#include <stdio.h>
int getmax(int arr[],int index){

    if(index==0){
        return arr[index];
    }
    int max = getmax(arr,index-1);
     if(max<arr[index]){
        max = arr[index];
     }
     return max;
}


int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<=n; i++){
        scanf("%d",&arr[i]);
    } 
    int max = getmax(arr,n);


   printf("%d\n",max);


   return 0;

}
