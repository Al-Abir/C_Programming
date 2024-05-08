#include <stdio.h>

int count(int n) {
    static int cnt = 0;
    if (n == 0) {
        return cnt;
    } else {
        cnt++;
        return count(n / 10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int ans = count(n);
    printf("%d\n", ans);
    return 0;
}