#include<stdio.h>

long long int summation(long long int arr[], int n, int i) {
    // Base case
    if (i == n)
        return 0;
      
   return arr[i] + summation(arr, n, i + 1);
}

int main() {
    long long int arr[1001];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]); 
    }
    long long int ans = summation(arr, n, 0);
    printf("%lld\n", ans);
    return 0;
}
