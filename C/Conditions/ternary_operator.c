#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d%s%d\n", (a > b) ? a : b, " больше ",(a > b) ? b : a);
    printf("%d%s%d\n", a, (a > b) ? " больше " : " меньше ", b);
    printf("%d%s%d\n", a, (a > b) ? " больше " : (a == b) ? " равно " : " меньше ", b);

    int n = 0;
    char * str_ = (char*) malloc(10);
    do {
        printf("Введите число меньше 10 и больше 0. Для выхода - введите число меньше 0 или больше 10\n");
        scanf("%d", &n);
        str_ = n == 1 ? "один" :
               n == 2 ? "два" :
               n == 3 ? "три" :
               n == 4 ? "четыре" :
               n == 5 ? "пять" :
               n == 6 ? "шесть" :
               n == 7 ? "семь" :
               n == 8 ? "восемь" :
               n == 9 ? "девять" :
               "вы ввели число, не из диапазона 1 - 9";
        printf("%s\n", str_);
    } while ((n > 0) && (n <= 10)); 
    return 0;


}