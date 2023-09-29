https://www.youtube.com/watch?v=9N_wJ7oIHDk&list=PL3BR09unfgcgf7R88ZQRQqWOdLy4pRW2h

https://www.youtube.com/watch?v=uC0jJGfDxtM&list=PLlb7e2G7aSpTFea2FYxp7mFfbZW-xavhL

# lecture_1
- cppreference.com
- Мейерс. Эффективное использование С++
        Наиболее эффективное использование С++
        Эффективный и современный С++
- стивен Пратт

компиляция - превращение файла в исполняемый (машинный код)

# lecture 2

// g++ --std=c++17 

CE - compile-time error

RE - runtime error - ошибка времени 
выполнения

        Segmentation Fault

-- слишком далекий выход за границу массива

-- бесконечная рекурсия

        Floating point exception

-- целочисленное деление на ноль
UB - undefined behavior - неопределенное поведение


warnings as errors:

g++ 
-Werror - все warnings в error
-Wall - предупреждать обо всем
-Wextra - еще дополнительно предупреждать

# declarations, definitions and scopes

- можно объявлять: переменные, функции, структуры, классы, namespace, union, 
alias: typedef vvi vector<vector<int>>

- определение
one definition rule;

объявлять можно сколько угодно раз, а определить - только 1 

# lecture 3
types, operations

- int, double, char, bool

# lecture 4

pointers and kinds of memory

int* 

поддерживаемые операции:
- * : T* -> T;
- & : T -> T*;
- + : (T*, int) -> T*;
      (int, T*) -> T*;
- (T*, T*) -> ptrdiff_t (=int)

указатель на void 
void* - указатель на память в которой неизвестно что 
его нельзя разыменовать;

nullptr - аналог нуля в мире указателей. 


5. memory, arrays, functions

-------------------------------------
- автоматическая память выделяется на стеке
- static int - переменная на всё время работы программы. Статическая память - data (статические переменные) + 
text (код программы) + 
stack (4Mb)
- динамическая память
int * p = new int(5); - выделение памяти
delete p;

нельзя два раза освобождать память по одному и тому же указателю. 

-------------------------------------

int * pa = new int[100];
int * pa = new int[k];
delete [] pa;

-------------------------------------
functions overloading
возможность объявлять несколько функций с одинаковыми названиями но разными типами принимаемых значений