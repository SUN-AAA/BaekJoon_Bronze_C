#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++) {
		for (j = 1; j < n - i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}