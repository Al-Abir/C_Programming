#include <stdio.h>

int sum(int n) {
    // base case
    if (n==0) {
        return 0;
    }
    else {
    
        return ((n%10)+sum(n/10));
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int result = sum(n);
    printf("Total sum: %d\n", result);

    return 0;
}
