#include <iostream>
#include <stdio.h>

int DigitSum(int n)
{
    int res;

    if (n < 10) return n;

    res = n / 10;
    return n - res * 10 + DigitSum(res);
}

int main()
{
    int n;
    printf("Vvedite chislo:  ");
    scanf("%d", &n);

    printf("\nSumma: %d\n", DigitSum(n));
    scanf(" ");
    
}

