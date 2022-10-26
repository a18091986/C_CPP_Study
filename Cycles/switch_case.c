#include <stdio.h>

int main() {
    float f;
    float s;
    int operator;
    float result;
    char c;
    printf("enter first operand: ");
    scanf("%f", &f);
    do {
        printf("\nenter 1 for +, 2 for -, 3 for *, 4 for / operations: ");    
        scanf("%d", &operator);
        printf("%d", operator);
    } while ((operator != 1) && (operator != 2) && (operator != 3) && (operator != 4));
    if (operator == 4) {
        do {
            printf("\nenter second operand: ");
            scanf("%f", &s);
        } while (s == 0);
    } else {
        printf("\nenter second operand: ");
        scanf("%f", &s);
    }
    switch (operator) {
        case 1:
            c = '+';
            result = f + s;
            printf("%f %c %f = %f\n", f, c, s, result);
            break;
        case 2:
            c = '-';
            result = f - s;
            printf("%f %c %f = %f\n", f, c, s, result);
            break;
        case 3:
            c = '*';
            result = f * s;
            printf("%f %c %f = %f\n", f, c, s, result);
            break;
        case 4: 
            c = '/';
            result = f / s;
            printf("%f %c %f = %f\n", f, c, s, result);
            break;
        default:
            printf("Неизвестная операция");
    }

    return 0;
}