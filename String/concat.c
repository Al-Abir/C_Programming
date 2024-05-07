
#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100 

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, j;

    printf("Enter first string: ");
    fgets(str1,MAX_SIZE,stdin);
        

    printf("Enter second string: ");
   fgets(str2,MAX_SIZE,stdin);

    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    strcpy(str1,str2);
    printf("Concatenated string = %s\n", str1);

    str1[i] = '\0';

    printf("Concatenated string = %s", str1);

    return 0;
}