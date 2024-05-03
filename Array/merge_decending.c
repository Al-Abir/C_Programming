#include <stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[200];
    int i, s1, s2, s3;

    scanf("%d", &s1);
    for(i = 0; i < s1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Array One: ");
    for(i = 0; i < s1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    scanf("%d", &s2);
    for(i = 0; i < s2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Array Two: ");
    for(i = 0; i < s2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    s3 = s1 + s2;

    // Copy elements of arr1 to arr3
    for(i = 0; i < s1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy elements of arr2 to arr3
    for(int j = 0; j < s2; j++) {
        arr3[i] = arr2[j];
        i++;
    }
    //decending order
    //decending order
 for(i = 0; i < s3; i++) {
    for(int j = 0; j < s3 - 1; j++) {
        //swap
        if(arr3[j] <= arr3[j+1]) {
            int temp = arr3[j+1];
            arr3[j+1] = arr3[j];
            arr3[j] = temp;
        }
    }
}


    printf("Merged Array: ");
    for(i = 0; i < s3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");

    return 0;
}
