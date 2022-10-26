// циклы 
// понятие цикла
// цикл while
// цикл do...while
// формат записи цикла do while
// break
// continue
// for
// switch

#include <stdio.h>
#include <math.h>

int main() {
    // цикл с предусловием

    int a = 10, b = 20, even = 0, count_even = 0;
    while (a < b) {
        printf("%d ", a);
        a++;
    }
    puts("");

    // подсчет количества четных чисел в промежутке
    a = 10;
    while (a < b) { 
        count_even = (a % 2 == 0) ? even+=1 : even;
        a++;
    }
    printf("%d\n", count_even);

    //  цикл с постусловием

    int input;
    do {
        printf("Enter divider, remember that we can't divide by zero\n");
        scanf("%d", &input);
    } while (input == 0);

    // 

    	int number = 71;
	printf("Input a number, please");
//	scanf("%d", &number);
	printf("\n");
	int d = 0, i = 1;
	while (i <= number) {
		if (number % i++ == 0)
			d++;
		else
			continue;

		if (d == 3) break;
	}
	printf("Введённое число %d %sявляется простым \n", number, (d==2) ? "" : "не ");

    return 0;
}