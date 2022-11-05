// понятие строки
// указатель и массив из переменных типа char
// функции puts(), printf(), gets()
// конкатенация строк - strcat()
// сравнение строк - strcmp()
// копирование строк - strcpy()
// обработка символов

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * stringFunction() {
    return "Hellow!";
}

char * hello_name(char * name) {
    char welcome[256] = "Hello, ";
    return strcat(welcome, name);
}

void hello_name_pointers(char * name, char * out) {
    char welcome[256] = "Hello, ";
    name[0] = tolower(name[0]);
    if (strcmp("Andrei", name) == 0) 
        strcpy(name, "Master!"); 
    name[0] = toupper(name[0]);
    strcat(welcome, name);
    strcpy(out, welcome);
}

int main() {
    char name[256];
    char out[256];
    
    //строки можно описать двумя способами - как указатель и как массив переменных типа char
    char string_1[256] = "This is a string!";
    char * string_2 = "This is also a string";

    printf("%s \n", string_1);
    printf("%s \n", string_2);

    string_1[5] = 'X';
    printf("%s \n", string_1);

    printf("%s \n", stringFunction());
    puts(stringFunction()); // добавляет символ конца строки после выводимой строки

    gets(name);// не рекомендуется к использованию
    puts(hello_name(name));

    hello_name_pointers(name, out);
    puts(out);

    //isalpha(), isdigit(), isspace(), isupper(), islower(), toupper(), tolower()
    //atoi(), atof() alphabetical to integer, alphabetical to float

    char num[64];
    printf("enter a number:\n");
    gets(num);
    int number = atoi(num);
    number *= number;
    printf("We powered your number to %d\n", number);

    return 0;
}
