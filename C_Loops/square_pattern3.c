#include <stdio.h>

int main(void) 
{
	int n;
	printf("Provide an integer: ");
	scanf("%d", &n);

	int j = n;

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n; col++) {
			if (col == row) {
			   printf("%d", j);
			   j--;
			}
			else {
			   printf("*");
			}
		}
		printf("\n");
	}
	return 0;

}