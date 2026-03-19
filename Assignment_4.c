/*Write a C program to calculate factorial of a number*/
# include <stdio.h> 
int main ()
{
    int num, i;
    int factorial=1;

    printf ("Enter a number :");
    scanf ("%d", &num) ;

    for (i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf ("The factorial of the number is %d", factorial);

    return 0;
}