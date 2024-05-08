#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = "Hello";
    int len = strlen(arr);
    printf("%d\n", len);
    char b[len + 1]; // Size increased to accommodate null terminator
    int j = 0; // Initialized j to 0
    for (int i = len - 1; i >= 0; i--) {
        b[j] = arr[i];
        j++;
    }
    b[j] = '\0'; // Null terminator added at the end
    for (int j = 0; b[j] != '\0'; j++) {
        printf("%c", b[j]);
    }

    return 0;
}
