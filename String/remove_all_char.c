#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeNonAlphabets(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove non-alphabetic characters
    removeNonAlphabets(str);
    
    printf("String after removing non-alphabetic characters: %s\n", str);
    
    return 0;
}