#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, i, j;
	scanf("%d", &n);
	for (int i = 1; i <= (2 * n - 1); i++) {
		if (i < n) {
			for (int j = 1; j <= (2 * n - 1); j++) {
				if (j >= 1 + (1 * i - 1) && j <= (2 * n - 1) - (1 * i - 1)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		else if (i == n) {
			for (int j = 1; j <= n; j++) {
				if (j < n) {
					printf(" ");
				}
				else {
					printf("*");
				}
			}
			printf("\n");
		}
		else {
			for (int j = 1; j <= (2 * n - 1); j++) {
				if (j >= n - (1 * i - n) && j <= n + (1 * i - n)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}