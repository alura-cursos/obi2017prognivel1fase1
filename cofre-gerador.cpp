#include <stdio.h>

int main() {
	printf("100000 100000\n");
	for(int i = 0; i < 100000; i++) {
		printf("%d ", 5);
	}
	printf("\n");
	for(int i = 1; i <= 100000; i++) {
		if(i % 2 == 1) {
			printf("1 ");
		} else {
			printf("100000 ");
		}
	}
	printf("\n");
	return 0;
}