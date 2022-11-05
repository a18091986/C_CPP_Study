#include <stdio.h>
// typedef - когда нам нужно в коде объявить свой тип данных
// typedef enum {

// } ;

enum eColor {
    green,
    red,
    blue,
    orange=0,
    yellow
};

enum {
    small,
    medium,
    high
};

typedef unsigned int my_int32;

typedef enum {
    SMALL,
    MEDIUM,
    HIGH
} esize;

int main() {
    enum eColor clr;
    clr = blue;
    printf("%d\n", clr);
    clr = yellow;
    printf("%d\n", clr);

    printf("small: %d, medium: %d, high: %d\n", small, medium, high);

    my_int32 test;
    for (int i=0; i<=4; i++) {
        test = 1E9 * i;
        printf("Value is %u\n", test);
    }

     esize var_1 = HIGH;
     printf("%d\n", var_1);
}