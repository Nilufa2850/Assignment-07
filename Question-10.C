//Write a program to print all Armstrong numbers under 1000.

#include<stdio.h>
int main()
{
    int num, num1, remi1, remi2, remi3;
    for (num=1; num<1000; num++)
    {
        remi1 = num % 10;
        num1 = num / 10;
        remi2  = num1 % 10;
        remi3 = num1 / 10;

        if (num == (remi3*remi3*remi3) + (remi2*remi2*remi2) + (remi1*remi1*remi1))
            printf("%d ", num);
            
    }

    return 0; 
}
