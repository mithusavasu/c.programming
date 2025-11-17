#include <stdio.h>

int main(void)
{
	int n;
	int sum =  0;
	int count = 0;

	while (scanf("%d", &n) != EOF) {
		sum += n;
		count++;
	}

	if (count > 0) { printf("Average = %.2f\n", (double) sum / count); }
	else printf("No numbers entered.\n");

	return 0;
}