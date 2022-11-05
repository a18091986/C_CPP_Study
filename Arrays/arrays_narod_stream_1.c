// https://www.youtube.com/watch?v=EBx27ZODU2k&list=PLJTlt64jBcCvN4H91HAK82-3-QwaqnxlF&index=33&t=717s&ab_channel=narodstream

#include <stdio.h>
#include <string.h>

void print_array(char * info, int * arr, int len_array) {
    printf("================================\n");
    printf("%s\n", info);
    for (int i = 0; i < len_array; i++) {
        printf("i: %d\n", arr[i]);
    }
}


int main() {  // массив располагется в памяти непрерывно

#if 0
    int a[10]; // не инициализировали массив - просто выделили под него память
    printf("%d\n", a[0]);
    printf("%d\n", ++a[0]);
    printf("%d\n", a[0]++);
    printf("%d\n", a[0]);
#endif
    
#if 0
    int a[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 4}; // int a[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 4};
    //char info[] = "a[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 4}";
    print_array(a, 10);   
    int zero[10] = {0}; 
    print_array(zero, 10);   
#endif

#if 0
    char info[] = "first_non_zero[10] = {1, 3, 4}"; // \0 подставляется автоматически
    int first_non_zero[10] = {1, 3, 4};
    print_array(info, first_non_zero, 10);   

#endif

    int a[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    char str_1[3][30];
    strcpy(str_1[0], "Hello, ");
    strcpy(str_1[1], "2d ");
    strcpy(str_1[2], "array");
    printf("%s%s%s\n", str_1[0], str_1[1], str_1[2]);
    
    char str_2[3][11]={"try ", "another ", "way"};
    printf("%s%s%s\n", str_2[0], str_2[1], str_2[2]);
    printf("size: %ld\n", sizeof(str_2));

    char * str_3[] = {"2d array ", "by ", "pointers"};
    printf("%s%s%s\n", str_3[0], str_3[1], str_3[2]);
    printf("size: %ld\n", sizeof(str_3));

    return 0;
}