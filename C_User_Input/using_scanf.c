/* Used to read from standard input (where keyboard is the default communication)
   Two key information:
         1. Do not use placeholder formatting - provide placeholders only
         2. Instead of providing a variable to print, provide the address of where to store
*/

#include <stdio.h>
int main(void)
{
    int number;
    scanf ("%d", &number);

    int age;
    double height;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%lf", &height);

    return(0);
}
