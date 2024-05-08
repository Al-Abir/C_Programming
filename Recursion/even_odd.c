#include <stdio.h>
void EvenAndOdd(int stVal, int n);
 
int main()
{
    int n;
	
     
    printf(" Input the range to print starting from 1 : ");
    scanf("%d", &n);
     
    printf("\n All even numbers from 1 to %d are : ", n);
    EvenAndOdd(2, n);
     
    printf("\n\n All odd numbers from 1 to %d are : ", n);
    EvenAndOdd(1, n);
    printf("\n\n");
     
    return 0;
}
void EvenAndOdd(int stVal, int n)
{
    if(stVal > n)
        return;
    printf("%d  ", stVal);
    EvenAndOdd(stVal+2, n);
}
