#include <stdio.h>

int main () {
    int a = 32;
    int * p_a = &a;
    printf("a: %d\n", a);
    printf("pointer_a: %p\n", p_a);
    *p_a += 1;
    printf("a after *p_a += 1: %d\n", a);

    int arr[3] = {1,2,3};
    printf("%d\n", *arr);
    printf("%p\n", arr);
    for (int i = 0; i < 3; i++) printf("%d., arr[%d]: %d\n", i, i, *(arr+i));
    return 0;
}