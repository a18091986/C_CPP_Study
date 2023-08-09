#include "header.h"

void print_str(const char * c_str) {
    printf("%s\n", c_str);
}
// ------------------------------------
void print_chars(const char * c_str) {
    int i=0;
    while (*(c_str+i)) {
        printf("%c", *(c_str + i));
        i++;
    }
    printf("\n");
}
// --------------------------------------
void print_digit_array(const int * arr, int array_length) {
    for (int i=0; i < array_length; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
// --------------------------------------
void sum(float a, float b, float * result) {
    *result = a + b;
}
// --------------------------------------
void print_struct(student * st_p) {
    printf("ФИО: %s\t Возраст: %d\t Курс: %d\n", st_p->fio, st_p->age, st_p->course);
}
// --------------------------------------
void add_student(student * res_student, int * student_counter,
                char * fio, int age, int course) {
                    strcpy(res_student->fio, fio);
                    res_student->age=age;
                    res_student->course=course;
                    (*student_counter)++;    
                }
// --------------------------------------