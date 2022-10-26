#include <stdio.h>

void swap(int * x, int * y) {
    int a = *x;
    int b = *y;
    *x = b;
    *y = a;
}

int main() {
    int a = 50;
    printf("значение a: %d\n", a);
    printf("адрес a: %p\n", &a); // разыменовавание переменной
    int * pointer;
    pointer = &a;
    printf("value of pointer: %p \n", pointer);
    printf("address of pointer: %p \n", &pointer);
    printf("variable 'pointer' points at %d\n", *pointer); //разыменовывание указателя

    *pointer = 100; // изменение значения переменной через указатель
    printf("Новое значение переменной а: %d\n", a);

    int x = 1, y = 2;
    printf("x, y before swap: %d, %d\n", x,y);
    swap(&x,&y);
    printf("x, y after swap: %d, %d\n", x, y);

    return 0;
}