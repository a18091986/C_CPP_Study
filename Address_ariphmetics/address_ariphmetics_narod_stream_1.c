#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[5] = {1,2,3,4,5};
    int * p_arr = arr;
    for (int i = 0; i < 5; i++) printf("%d\t", arr[i]);
    printf("\n");
    printf("-------------------------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) printf("%p\t", &arr[i]);
    printf("\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("a[0]: %d\n", *p_arr);
    printf("pointer_a[0]: %p\n", p_arr);
    p_arr++;
    printf("a[1]: %d\n", *p_arr);
    printf("pointer_a[1]: %p\n", p_arr);
    p_arr+=3;
    printf("a[4]: %d\n", *p_arr);
    printf("pointer_a[4]: %p\n", p_arr);
    p_arr-=4;
    printf("a[0]: %d\n", *p_arr);
    printf("pointer_a[0]: %p\n", p_arr);
    int * p_arr_4 = p_arr + 5;
    printf("Between pointer_0 and pointer_4: %ld\n", p_arr_4 - p_arr);
    printf("Between pointer_0 and pointer_4 size: %ld\n", (p_arr_4 - p_arr) * sizeof(int));

    int p_test = *++p_arr;
    int p_test_1 = *p_arr++;
    printf("%p\n", p_arr);
    printf("%d\n", p_test);
    printf("%d\n", p_test_1);



    return 0;
}