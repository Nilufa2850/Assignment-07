//Write a program to print all Prime numbers under 100.

#include<stdio.h>
int main()
{
    int num, divider, flag;
    printf("Prime numbers between 1 to 100 are : ");
    for (num=2; num<=100; num++)
    {
        flag=0;
        for (divider=2; divider<=(num/2); divider++)
        {
            if (num % divider == 0)
                flag++;
        }

        if (flag == 0)
            printf("%d ", num);

    }

    return 0; 
}
