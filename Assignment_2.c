/*Write a C program to perform basic arithmetric operations*/
# include <stdio.h>
int main ()
{
    int a, b, c ;
    printf ("Enter the first number: ") ;
    scanf ("%d", &a) ;
    printf ("Enter the second number: ") ;
    scanf ("%d", &b) ;

    c = a + b ;
    printf ("The addition of the numbers is %d\n", c) ;

    c = a - b ;
    printf ("The subtraction of the two numbers is %d\n", c) ;

    c = a * b ;
    printf ("The multiplication of the two numbers is %d\n", c);

    if (b != 0)
    {
        c = a / b ;
        printf ("The division of the two numbers is %d\n", c);
    }
   else 
   {
        printf ("Error") ;
   }

    return 0 ;
}