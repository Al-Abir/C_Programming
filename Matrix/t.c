#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N][N];

    // Input matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate the sums of the diagonals
    int primary_sum = 0, secondary_sum = 0;
    for (int i = 0; i < N; i++) {
        primary_sum += A[i][i];
        secondary_sum += A[i][N - i - 1];
    }

    // Calculate the absolute difference
    int absolute_diff = abs(primary_sum - secondary_sum);

    // Output the result
    printf("%d\n", absolute_diff);

    return 0;
}
