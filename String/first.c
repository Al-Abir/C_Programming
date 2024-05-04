#include <stdio.h>
#include<string.h>

int main() {
    char ab[] = "hello";
    // int len = strlen(ab);
    printf("%s\n",ab);
    printf("%lu\n",strlen(ab));
    for (int i = 0; ab[i] != '\0'; i++) {
        printf("%c\n", ab[i]);
    }
    return 0;
}

