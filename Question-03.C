/* Write a program to check whether a given number is there in the Fibonacci
series or not.*/

#include<stdio.h>
int main()
{
     int n, i , a = -1 , b = 1 , c;
    printf("Enter a number to find fibonnaci series : ");
    scanf("%d", &n);

    if(n == 0 || n == 1)
        printf("\n%d is fibonnaci number. ",n);
    else
    {
        for(i=1 ; 1 ; i++)
        {
            c = a + b ;
            a = b ;
            b = c ;

            if(c == n)
            {
                printf("\n%d is a fabinnaci number.",n);
                break ;
            }
            else if (c > n)
            {
                printf("\n%d is not fabinnaci number.",n);
                break ;
            }
        }

    }

    return 0; 
}
