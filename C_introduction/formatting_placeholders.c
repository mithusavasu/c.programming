#include <stdio.h>
int main(void)
{
    int temp = 9;
    printf("It is %5d degrees\n", temp);
    
    printf("Number is %-8d.\n", 1234);

    int num = -38;
    printf("%6d\n", num);

    double num1 = 1.21997;
    printf("%lf", num1);

    double num = 3.1415;
    /*1*/ printf(“%lf\n”, num);
    /*2*/ printf(“%.2lf\n”, num);
    /*3*/ printf(“%8.2lf\n”, num);
    /*4*/ printf(“%.6lf\n”, num);
    /*5*/ printf(“%-8.2lf\n”, num);
    /*6*/ printf(“%-.3lf\n”, num);
    return (0);

    /* More placeholders
       %d - decimal (int)
       %f - floating point (float)
       %lf - long floating point (double)
       %c - character (char)
       %s - string 
    */
}