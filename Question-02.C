// Write a program to print first N terms of Fibonacci series. 

#include<stdio.h>
int main()
{
     int n, i , a = -1 , b = 1 , c;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("\nFibonnaci series are : ");

    for(i=1 ; i<=n ; i++)
    {
        c = a + b ;
        printf("\n%d",c);
        a = b ;
        b = c ;
    }

     return 0; 
}
