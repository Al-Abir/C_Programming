#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int min_index = 0;
    int max_index = 0;

    // Finding the indices of the minimum and maximum elements
    for (int i = 1; i < n; i++) {
        if (a[i] < a[min_index]) {
            min_index = i;
        }
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }
    
    // Swapping the minimum and maximum elements
    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;

    // Printing the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
