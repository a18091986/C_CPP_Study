#include <stdio.h>

#define A 5
#define const_str "TEST"

int main () {

    const int a = 5; // const далее в коде менять нельзя
    printf("%d\n", a);
    printf("%d\n", A);

    const char str1[] = "TEST_1";

    printf("%s\n", const_str);
    printf("%s\n", str1);

    
}