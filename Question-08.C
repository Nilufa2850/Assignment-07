//Write a program to find next Prime number of a given number.

#include<stdio.h>
int main()
{
    int num, divider, flag;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i=num+1; 1; i++)
    {
        flag = 0;
        for  (divider=2; divider<=(i/2); divider++)
        {
            if (i % divider == 0)
                flag++;        
        }
        if (flag == 0)
        {    
            printf("%d", i);
            break;
        }

    }

    return 0; 
}
