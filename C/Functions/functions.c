#include <stdio.h>

// фцнкция - обособленная часть кода, которую можно выполнять неограниченное количество раз
// void - пустота

int sum(int x, int y) {
    int result = x + y;
    return result;
}

int isPrime(int number) {
    int d = 0, i = 1;
    int result = 1;
    while (i <= number) {
        if (number % i++ == 0) {
            d++;
            if (d == 3) {
                result = 0;
                break;
                }  
            } else
                continue;
    }
    return result;
}

void cicle(int num) {
    printf("num: %d\n", num);
    int i = 0;
    while (i <= num) {
        printf("i: %d\n", i);
        i++;
    }
}

int main() {
    int a, b, n, num;
    // scanf("%d", &num);
    scanf("%d", &n);
    // scanf("%d %d", &a, &b);
    // printf("%d\n", sum(a,b));
    printf("%s\n", isPrime(n) ? "Число простое" : "Число не простое");
    // cicle(num);
    return 0;
}