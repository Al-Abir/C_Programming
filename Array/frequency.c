#include <stdio.h>

int main() {
    int arr[100], b[100] = {0}; // Initialize b array with zeros
    int s1, cnt;

    scanf("%d", &s1);
    for(int i = 0; i < s1; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < s1; i++) {
        cnt = 1;
        if(arr[i] != -1) {
            for(int j = i + 1; j < s1; j++) {
                if(arr[i] == arr[j]) {
                    cnt++;
                    arr[j] = -1;
                }
            }
            b[i] = cnt;
        }
    }

    for(int i = 0; i < s1; i++) {
        if(arr[i] != -1) {
            printf("%d %d\n", arr[i], b[i]);
        }
    }

    return 0;
}
