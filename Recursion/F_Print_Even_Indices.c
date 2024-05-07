#include <stdio.h>

void even_index(int arr[], int n, int i) {
    
    if (i <0 ) {
        return;
    }
    if (i % 2 == 0) {
        printf("%d ", arr[i]);
    }
    even_index(arr, n, --i);
}

int main() {
    int arr[1000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    even_index(arr, n, n - 1);
    return 0;
}
