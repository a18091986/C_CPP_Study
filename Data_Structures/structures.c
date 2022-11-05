// понятие структуры данных
// ключевое слово struct для описания структуры
// описание структуры "простая дробь" (пример)

#include <stdio.h>

// структура данных - сущность, объединяющая в себе несколько примитивов или несколько ссылочных типов данных

struct fraction {
    int integer;
    int divisible;
    int divisor;
};

typedef struct fraction Fraction;// описание структуры для дальнейшего сокращенного наименования  

void printFraction(Fraction f) {
    if (f.divisible != 0)
        if (f.integer == 0)
            printf("%d/%d", f.divisible, f.divisor);
        else
            printf("%d %d/%d", f.integer, f.divisible, f.divisor);
    else
        printf("%d", f.integer);
    printf("\n");
}

void fractionMultiply(Fraction f1, Fraction f2, Fraction * result) {
    result -> divisible = f1.divisible * f2.divisible; // так полчают доступ к полям структуры по указателю
    result -> divisor = f1.divisor * f2.divisor;
    result -> integer = f1.integer * f2.integer;
}

int main() {
    Fraction f1, f2, result;
    f1.integer = -1;
    f2.integer = 1;
    f1.divisible = 1; 
    f2.divisible = 1;
    f1.divisor = 5;
    f2.divisor = 5;

    printFraction(f1);
    printFraction(f2);

    fractionMultiply(f1, f2, &result);
    printFraction(result);

    return 0;
}