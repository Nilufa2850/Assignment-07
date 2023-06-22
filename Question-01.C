// Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
     int n, i , a = -1 , b = 1 , c;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("\n %dth term of Fibonnaci series is : ",n);

    for(i=1 ; i<=n ; i++)
    {
        c = a + b ;
        a = b ;
        b = c ;
    }
    printf("%d",c);

    return 0; 
}
