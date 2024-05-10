#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int flag = 1;

    if (n != m) { 
        flag = 0;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

             
                if ((i == j || i + j == n - 1) && arr[i][j] != 1) {
                    flag = 0;
                    break;
                }
                if ((i != j && i + j != n - 1) && arr[i][j] != 0) {
                    flag = 0;
                    break;
                }
               
            }
            if (flag == 0) {
                break;
            }
        }
    }

    if (flag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

