#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ARRAY_LENGTH 10
#define boolean int
#define true 1
#define false 0
#define NUMBERS_AMOUNT 1000000

int main() {
    int a = ARRAY_LENGTH;
    printf("%d\n", a);
    // массив - некоторое множество данных одного типа. язык Си строго типизирован поэтому невозможно создать массив из разных типов данных

    // статический массив - массив, количество элементов которого заранее известно и не изменяется
    // Си не гарантирует, что инициализационные значения массива будут равны 0, если это не будет указано явно
    // два способа задания статического массива
    // 1
    int array_1[ARRAY_LENGTH];
    array_1[0] = 10;
    array_1[1] = 20;
    printf("array_1:\n");
    for (int i=0; i < ARRAY_LENGTH; i++) {
        printf("%d ", array_1[i]);
    }
    printf("\n");
    //...
    
    // 2 
    int array_2[5] = {1, 2, 3, 4, 5};
    printf("array_2:\n");
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        printf("%d ", array_2[i]);
    }
    printf("\n");

    // проверка равномерности распредления сгенерированных случайных чисел 
    srand(time(NULL));
    int frequency[ARRAY_LENGTH]={0};
    int b, i;
    for (i=0; i < NUMBERS_AMOUNT; i++) {
        a = rand() % ARRAY_LENGTH;
        frequency[a]++;
    }

    for (int i = 0; i < ARRAY_LENGTH; i++) {
        printf("Number %d generated %6d (%5.2f%%) times \n", i, frequency[i], ((float)frequency[i] / NUMBERS_AMOUNT * 100));
    }

    
    return 0;   
}