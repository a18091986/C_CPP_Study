#include "header.h"

// протитипы функции

int main () {
    print_str("Привет мир!");
    print_chars("Посимвольная распечатка строчного массива");
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    print_digit_array(arr, 10);
    float result;
    sum(3.2, 4.5, &result);
    printf("%lf\n", result);
    student st_1;
    student st_2;
    strcpy(st_1.fio, "Студентов Студент Студентович");
    st_1.age = 22;
    st_1.course = 3;
    print_struct(&st_1);

    student st[10];
    int student_counter = 0;
    for (int i = 0; i < 10; i++) {
        if (student_counter < 5) add_student(&st[i], &student_counter, "Тестовый Тест Тестович", 24, 3);
        else printf("Counter: %d\n", student_counter);
    }
    for (int i = 0; i < 5; i++) {
        print_struct(st+i);    
    }
    
    return 0;
}