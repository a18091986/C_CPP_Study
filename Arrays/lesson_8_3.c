#include <stdio.h>


int main() {
    printf("multi-dimmensional Arrays!\n");
    
    const int rows = 10, cols = 10;
    int table[rows][cols];    
    
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++)
            table[r][c] = (r + 1) * (c + 1);
    }
    
    
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++)
            printf("%4d", table[r][c]);
        printf("\n");
    }

    char * stringArray[3] = {"hello", "c", "world"};
    for (int c = 0; c < 3; c++) {
        printf("%s ", stringArray[c]);
    }
    printf("\n");

    return 0;
}

