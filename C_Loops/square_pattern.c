#include <stdio.h>
int main(void)
{
	/* Square Pattern */
	int n = 5;
	for (int row = 1; row <= 5; row++) {
		for (int col = 1; col <= n; col++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}