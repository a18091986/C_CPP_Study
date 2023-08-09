#ifndef STUDENTS_H_
#define STUDENTS_H_

struct student {
    char nm[60];
    int age;
    int course;
};

typedef struct {
    char nm[60];
    int age;
    int course;
} student_1;
#endif /* STUDENTS_H_ */