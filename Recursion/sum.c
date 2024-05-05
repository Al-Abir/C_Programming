#include <stdio.h>

int sum(int n, int i, int a) {
    // base case
    if (i > n) {
        return a;
    }
    else {
        a += i;
        return sum(n, i + 1, a);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int result = sum(n, 0, 0);
    printf("Total sum: %d\n", result);

    return 0;
}
