//1 идентификатор массива
//2 выход за пределы массива
//3 арифметика указателей
//4 передача массива в функцию

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNT 1000000

void printArray(int * array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}

float average(int * array, int length) {
    float result = 0;
    for (int i = 0; i < length; i++) {
        result += *(array + i);
    }
    return result / length;
}

// массивы - ссылочный тип данных, т.е. в идентификаторе хранится ссылка на первый байт перевого элемента массива
// дальнейший доступ к элементам массива осуществляется посредством смещения относительно этого байта
// массив - единая облаьт в памяти, т.о. значения находятся последовательно 
int main() {
    int arr[ARRAY_LENGTH] = {0};
    //arr[0] = 20; // эта запись говорит о том, что нужно взять адрес массива и сместить указатель на 0 элементов того типа, из которых состоит массив 
                 // этим объясняется то, что индексация массивов начинается именно с нуля.
    //arr[1] = 50;
    //arr[10] = 60; //ни компилятор, ни ОС никаких проверок на предмет выхода за пределы массива не делают 

// идентификатор массива - по сути - указатель, т.о. мы можем получить доступ к элемиентам массива при помощи арифметики указателей
    int i = 0;
    float result = 0;
    while(i < ARRAY_LENGTH) {
        printf("Enter number for %d element of massive: ", i);
        scanf("%d", arr + i); // говорим, что введенное число требуется положить по адресу массива со сдвигом на i
        i++;
    }
    printf("Array: \n");
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        result += *(arr + i);
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Average %2.2f\n", result / ARRAY_LENGTH);
    
    // то же самое с помощью функций
    printf("Array: \n");
    printArray(arr, ARRAY_LENGTH);
    printf("\nAverage %2.2f\n", average(arr, ARRAY_LENGTH));


    return 0;
}