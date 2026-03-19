/*Write a C program to take input from the user and display it*/
# include <stdio.h>
int main ()
{
    int num ;
    printf ("Enter a number: ") ;
    scanf ("%d", &num) ;

    printf("You entered the number %d",num) ;

    return 0 ;
}