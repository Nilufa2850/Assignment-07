//Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int num1, num2, divider, flag;
    printf("Enter two numbers as range of Prime Number. : ");
    scanf("%d %d", &num1, &num2);

    printf("Prime Numbers between %d to %d are : ", num1, num2);
    for (num1=num1; num1<=num2; num1++)
    {
        flag = 0;
        for (divider=2; divider<=(num1/2); divider++)
        {
            if (num1 % divider == 0)
                flag++;
        }

        if (flag == 0)
            printf("%d ", num1);
    }

    return 0; 
}
