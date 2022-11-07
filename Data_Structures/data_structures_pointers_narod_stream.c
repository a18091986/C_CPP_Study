#include <stdio.h>
#include <string.h>
#include "students.h"

int main() {
    struct student st1;
    strcpy(st1.nm, "Иванов Иван Иванович");
    st1.age=20;
    st1.course=2;
    
    struct student *st1_p = &st1;
    printf("Студент: %s\t Возраст: %d\t Курс: %d\n", st1_p->nm, st1_p->age, st1_p->course);

    struct student st2;
    struct student * st2_p = &st2;
    strcpy(st2_p->nm, "Петров Петр Петрович");
    st2_p->age=20;
    st2_p->course=3;
    printf("Студент: %s\t Возраст: %d\t Курс: %d\n", st2_p->nm, st2_p->age, st2_p->course);

    student_1 st;
    student_1 * st_p = &st;
    strcpy(st_p->nm, "Сидоров Сидр Сидорович");
    st_p->age=20;
    st_p->course=3;
    printf("Студент: %s\t Возраст: %d\t Курс: %d\n", st_p->nm, st_p->age, st_p->course);


    return 0;
}

