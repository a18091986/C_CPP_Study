#include <stdio.h>
#include <unistd.h>

//argc - argument count - количество аргументов командной строки
//argv - argument vector - массив значений аргументов
//argv[0] - имя программного файла. 
//
// int main (int argc, char **argv) - the same
int main (int argc, char *argv[]) {
    printf("argv[1]:%s\n", argv[1]);
    return 0;
}