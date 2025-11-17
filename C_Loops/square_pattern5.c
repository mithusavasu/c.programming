#include <stdio.h>
int main(void)
{
	int n;
	printf("Provide an integer: ");
	scanf("%d", &n);

	int k = n;

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n; col++) {
			if (col == k) {
			   printf("%d", k);
			}
			else {
			   printf("*");
			}
		}
		k--;
		printf("\n");
	}
	return 0;

}