/* Write a program to check whether two given numbers are co-prime
numbers or not*/

#include<stdio.h>
int main()
{
    int a, b, i, min, HCF;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    min = (a < b) ? a : b;

    for (i=1; i<=min; i++)
    {
        if (a % i == 0 && b % i == 0)
            HCF = i;
    }

    if (HCF == 1)
        printf("Given two numbers are Co-Prime to each others as HCF is %d", HCF);
    else 
        printf("Not Co-Prime as HCF is %d", HCF);

    return 0; 
}
