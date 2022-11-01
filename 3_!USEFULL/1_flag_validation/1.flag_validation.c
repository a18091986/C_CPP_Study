#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // булева алгебра
#include <string.h>

//#define SIZE 3 // можно так задеклоривать размер массива с допустимыми флагами
//const char * const allowedFlags[SIZE] = {"--size", "--sort", "--print"};  // декларируем массив допустимых флагов (строк)

const char * allowedFlags[] = {"--size", "--sort", "--print"};
const int allowedFlagsLength = sizeof allowedFlags / sizeof allowedFlags[0];

int validateFlags(const char * flags[], const int length) {  // const - потому что мы не планируем в данной функции вносить изменнения аргументов
    // возврщает 1 если хоть один из флагов ошибочный и 0, если все поданные флаги - разрешенные
    int validation_result_current_flag = 0;
    int validation_result = 0;
    // bool flagExists = false;
    for (int i = 1; i < length; i++) {
        validation_result_current_flag = 0;
        // flagExists = false;
        for (int j = 0; j < allowedFlagsLength; j++) {
            if (strcmp(flags[i], allowedFlags[j]) == 0) validation_result_current_flag = 1; //strcmp возвращает 0, если строки совпадают
            // if (strcmp(flags[i], allowedFlags[j]) == 0) flagExists = true;
        }
        if (!validation_result_current_flag) {
            printf("%s - is not allowef Flag\n", flags[i]);
            validation_result = 1;
        }
    }    
    return validation_result;
    // return; //если функция не возвращает параметров, то return возвращает упрвление в функцию, вызвавшую данную функцию
}

// const перед типом блокирует изменение содержимого переменной, структуры и т.п.
// const перед именем блокирует изменение адреса переменной

int main(const int argc, const char * argv[]) {  
    // printf("%d\n", argc);
    int result;
    if (argc > 1) result = validateFlags(argv, argc);
    result == 1 ? printf("Среди флагов были ошибочные\n") : printf("Все флаги разрешенные\n");
    return result;
}

//EXIT_SUCCESS, EXIT_FAILURE - из stdlib - вместо 0 и 1 

//echo $?