#include <stdio.h>

int main() {


int significative = 10;
	int base = 2;
	int result = 1;
    // цикл с предусловием
	for (int i = 0; i < significative; i++) {
		result *= base;
	}
	printf("%d powered by %d is %d \n", base, significative, result);

    return 0;
}

