#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num, pos = 0, neg= 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0) {
            pos += num;
        } else {
            neg+= num;
        }
    }
    printf("%d %d\n", pos, neg);
    return 0;
}
