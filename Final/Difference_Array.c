#include <stdio.h>

int main() {
    int test, n, i, j, temp;

    scanf("%d", &test);

    while (test--) {
        scanf("%d", &n);

        int a[n], b[n], c[n];

       
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }


        for (i = 0; i < n; i++) {
            b[i] = a[i];
        }

        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        for (i = 0; i < n; i++) {
            c[i] = abs(a[i] - b[i]);
        }

        for (i = 0; i < n; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}
