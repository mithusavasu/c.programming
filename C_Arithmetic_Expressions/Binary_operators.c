/* Binary Operators - two operands
    1. Addition (+) : 3 + 4 or 24.1 + 355.2
    2. Subtraction (-) : 50 - 20 or 23.5 - 21.9
    3. Multiplication (*) : 5 * 10 or 0.3 * 11
    4. Division (/) : 50.0 / 2.0 or 24 / 2
    5. Remainder (%) : 30 % 2 or 45 % 5 *only works for ints* 
*/

#include <stdio.h>
int main(void) 
{
    int x = 88; y = 100;
    double result;
    result = x/y;
    printf("x/y = %lf\n", result); //output: x/y = 0.000000
    
    double a = 99, b = 100;
    double result;
    result = a/b;
    printf("a/b = %lf\n", result); //output a/b = 0.99000
    //shows that two doubles result in a double

    //a mixed expression of a floating-point and int results in floating point
    
}