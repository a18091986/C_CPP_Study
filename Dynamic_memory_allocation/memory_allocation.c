// динамическое выделение памяти
// процесс выделения памяти
// malloc()
// sizeof()
// calloc()
// free()
// realloc()

#include <stdio.h>
#include <stdlib.h>


int main() {
    const int SIZE = 10;
    // void malloc(<memory size>) - возвращает указатель на void - т.е. область памяти будет зафиксирована, но не размечена
    //int * area = (int*) malloc(123); // обозначаем, что необходимо выделить некоторую область памяти (123 байта в данном случае) и поделить её на ячейки размера int
    int * area = (int*) malloc(123 * sizeof(int)); // таким образом мы выделим память для хранения 123 переменных типа int
    // это почти тоже самое, что объявление массива
    int array[SIZE];
    int i;
    for (i = 0; i < SIZE; i++) array[i] = i * 10;
    for (i = 0; i < SIZE; i++) printf("%d ", array[i]);
    puts("");
    for (i = 0; i < SIZE; i++) *(area + i) = i * 10;
    for (i = 0; i < SIZE; i++) printf("%d ", *(area + i));
    puts("");
    // для гарантированной очистки резервируемой памяти используется функция calloc
    int * area_1 = (int*) calloc(SIZE, sizeof(int));
    for (i = 0; i < SIZE; i++) printf("%d ", *(area_1 + i));
    puts("");

    int newsize = SIZE + 10;
    int * area_2 = realloc(area, sizeof(int) * (newsize));
    for (i = 0; i < newsize; i++) *(area + i) = i * 10;
    for (i = 0; i < newsize; i++) printf("%d ", *(area + i));
    puts("");

    // free(area); 
    free(area_1);
    free(area_2);



    return 0;
}
