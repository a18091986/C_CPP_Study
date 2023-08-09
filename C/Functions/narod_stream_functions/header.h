#ifndef HEADER_H_
#define HEADER_H_
#include <stdio.h>
#include <string.h>

void print_str(const char * c_str);
void print_chars(const char * c_str);
void print_digit_array(const int * arr, int array_length);
void sum(float a, float b, float * result);
typedef struct {
    char fio[60];
    int age;
    int course;
} student;

void print_struct(student * st_p);
void add_student(student * res_student, int * student_counter,
                char * fio, int age, int course);


#endif /* HEADER_H_ */