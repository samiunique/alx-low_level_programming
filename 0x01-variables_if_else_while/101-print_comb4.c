#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int i, j, k;
	int count = 0;

	for (i = 0; i <= 9; i++) {
		for (j = 1; j <= 6; j++) {
			for (k = 2; k <= 6; k++) {
				if (count < 599) {
					printf("%d%d%d", i, j, k);
					count += 3;

					if (!(i == 9 && j == 6 && k == 6)) {
						if (count < 599) {
							printf(", ");
							count += 2;
						} else {
							break;
						}
					}
				} else {
					break;
				}
			}
			if (count >= 599) {
				break;
			}
		}
		if (count >= 599) {
			break;
		}
	}

	printf("\n");

	return (0);
}
