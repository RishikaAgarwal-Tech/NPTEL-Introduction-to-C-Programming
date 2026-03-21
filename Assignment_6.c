/*Write a C program to calcuate average of three numbers using function*/
# include <stdio.h>
float average (int a, int b, int c)
    {
        float avg ;
        avg = (a+b+c)/3.0;
        return avg;
    }
    int main ()
    {
        int num1, int num2, int num3;
        float result;
        printf ("Enter three numbers :");
        scanf ("%d %d %d", num1, num2, num3);
        result = average(num1, num2, num3);

        printf ("The average is %.2f", result);
        
        return 0;
    }
