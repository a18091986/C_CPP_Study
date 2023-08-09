#include <stdio.h>
#include <string.h>

struct students {
    char nm[50];
    unsigned char age;
    unsigned char course;
};

typedef struct {
    char fio[50];
    unsigned int age;
    unsigned int course;
} students_2;

typedef struct {
    char fio[50];
    unsigned int age;
    unsigned int course;
} students_3;

students_3 generate_students (char ch[], unsigned int age, unsigned int course, int *counter);

int main ( ) {
    
    struct students st_1;
    strcpy(st_1.nm, "Петров Петр Петрович");
    strcpy(st_1.nm, "Иванов Иван Иванович");
    // st_1.nm = "Сидоров Сидр Сидорович";

    st_1.age = 20;
    st_1.course = 3;
    printf("%s: возраст: %d, курс: %d\n", st_1.nm, st_1.age, st_1.course);  

    students_2 st_2;
    strcpy(st_2.fio, "Михайлов Михал Михалыч");
    st_2.age = 33;
    st_2.course = 3;
    printf("Студент: %s \tвозраст: %d \tкурс: %d\n", st_2.fio, st_2.age, st_2.course);

    students_2 st[3];
    for (int i = 0; i < 3; i++) {
        strcpy(st[i].fio, "Тестовый тест тестович");
        st[i].age = 35 + i;
        st[i].course = 0 + i;        
    }
    for (int i=0; i < 3; i++) {
        printf("Студент: %s\t Возраст: %d\t Курс: %d\t\n", st[i].fio, st[i].age, st[i].course);
    }

    int counter = 0;
    // int * p_counter = &counter;
    students_3 st_3[20];
    for (int i = 0; i < 3; i++) {
        st_3[i] = generate_students("Тестовый тест тестович", counter + 20, counter, &counter);
        printf("Counter: %d\n",  counter);
    }

    for (int i=0; i < 3; i++) {
        printf("Студент: %s\t Возраст: %d\t Курс: %d\t\n", st_3[i].fio, st_3[i].age, st_3[i].course);
    }


    return 0;
}


students_3 generate_students (char ch [], unsigned int age, unsigned int course, int * counter) {
    students_3 st_3;
    strcpy(st_3.fio, ch);
    st_3.age = age;
    st_3.course = course;
    *counter += 1;

    printf(" Counter: %d", *counter);
    return st_3;
}