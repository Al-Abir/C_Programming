
// Inverted right half pyramid of stars using C
#include <stdio.h>

int main()
{
    int rows = 7;

    // first loop to print all rows
    for (int i = 1; i <=rows; i++) {

        // first inner loop to print the * in each row
        for (int j = 1; j <= rows - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Inverted left half pyramid of stars using C
