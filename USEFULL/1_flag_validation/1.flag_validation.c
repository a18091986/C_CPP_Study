#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // булева алгебра
#include <string.h>

//#define SIZE 3 // можно так задеклоривать размер массива с допустимыми флагами
//const char * const allowedFlags[SIZE] = {"--size", "--sort", "--print"};  // декларируем массив допустимых флагов (строк)

const char * const allowedFlags[] = {"--size", "--sort", "--print"};
const int const allowedFlagsLength = sizeof allowedFlags / sizeof allowedFlags[0];

int validateFlags(const char * const flags[], const int const length) {  // const - потому что мы не планируем в данной функции вносить изменнения аргументов
    int validation_result_current_flag = 0;
    int validation_result = 1;
    // bool flagExists = false;
    for (int i = 1; i < length; i++) {
        validation_result_current_flag = 0;
        // flagExists = false;
        for (int j = 0; j < allowedFlagsLength; j++) {
            if (strcmp(flags[i], allowedFlags[j]) == 0) validation_result_current_flag = 1; //strcmp возвращает true, если строки совпадают
            // if (strcmp(flags[i], allowedFlags[j]) == 0) flagExists = true;
        }
        if (!validation_result_current_flag)
            printf("%s - is not allowef Flag\n", flags[i]);
    }    

    // return; //если функция не возвращает параметров, то return возвращает упрвление в функцию, вызвавшую данную функцию
}

// const перед типом блокирует изменение содержимого переменной, структуры и т.п.
// const перед именем блокирует изменение адреса переменной

int main(const int const argc, const char * const argv[]) {  
    // printf("%d\n", argc);
    int result = 0;
    if (argc > 1) result = validateFlags(argv, argc);
    return result;
}

//EXIT_SUCCESS, EXIT_FAILURE - из stdlib - вместо 0 и 1 