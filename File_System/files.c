// понятие файловой системы
// создание и запись текстового файла
// чтение из текстового файла

#include <stdio.h>

int main() {

    FILE * f;

    // запись в файл
    f = fopen("filename.txt", "w"); // возвращает указатель на адрес в памяти r = read, w = write, a = append; rb, wb, ab  
    if (f == NULL) return 1; //если файл не был открыт, то в указатель запишется NULL
    fprintf(f, "Hello, files! %s", "we did it! \n");
    fclose(f);

    // чтение из файла
    f = fopen("filename.txt", "r"); // возвращает указатель на адрес в памяти r = read, w = write, a = append; rb, wb, ab  
    char word[256];
    while (!feof(f)) {
        fscanf(f, "%s ", word);
        printf("%s ", word);
    }
    puts("");
    fclose(f);
    

    
    return 0;
}