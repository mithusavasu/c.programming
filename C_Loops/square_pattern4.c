#include <stdio.h>
int main(void) 
{
	int n;
	printf("Provide an integer: ");
	scanf("%d", &n);

	int k = n;
	int j = 1;

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n; col++) {
			if (col == k) {
			   printf("%d", j);
			   j++;
			   k--;
			}
			else {
			   printf("*");
			}
		}
		printf("\n");
	}
	return 0;

}