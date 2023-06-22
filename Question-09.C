//Write a program to check whether a given number is an Armstrong number
//or not.

#include<stdio.h>
int main()
{
    int num, oriNum, remi, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    oriNum = num;

    while (oriNum != 0) 
    {
        remi = oriNum % 10;
        result = result + (remi * remi * remi);
        oriNum = oriNum / 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
        
    return 0; 
}
