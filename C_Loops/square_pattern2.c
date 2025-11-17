#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            if (col == row)
                printf("%d", row);
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}