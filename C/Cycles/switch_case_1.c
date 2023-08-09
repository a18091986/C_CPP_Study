#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    switch (a) {
        case 20:
            printf("a = 20\n");
            break;
        case 25: case 30: case 40:
            printf("a = 25 || 30 || 40");
            break;
        default: // необязательный оператор
            printf("a != 25 || 30 || 40\n");
    }

    return 0;
}