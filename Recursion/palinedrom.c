#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(const char a[], int start, int end) {
    if (start >= end) {
        return true;
    } else {
        // Convert characters to lowercase for case-insensitive comparison
        return (tolower(a[start]) == tolower(a[end]) && isPalindrome(a, start + 1, end - 1));
    }
}

int main() {
    char a[100];


    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0'; 

    bool is_palindrome = isPalindrome(a, 0, strlen(a) - 1);

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
