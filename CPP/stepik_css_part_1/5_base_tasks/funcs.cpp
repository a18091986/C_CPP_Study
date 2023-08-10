#include "funcs.hpp"

void task_1() {    
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
    }
}

void task_2() {
    int a, b, c;
    double discr, r1, r2;

    std::cin >> a >> b >> c;
    discr = pow(b, 2) - 4 * a * c;

    // std::cout << "Discr: " << discr; 
    
    if (discr < 0)
        std::cout << "No real roots";
    else {
        r1 = (-b + sqrt((double) discr)) / (2 * a);
        r2 = (-b - sqrt((double) discr)) / (2 * a);
        std::cout << r1 << " " << r2 << std::endl;
    }    
}

void task_3() {
    char current = '\0';
    char previous = '\0';
    while(std::cin.get(current)) {
        if (current == ' ' && previous != ' ') 
            std::cout << current;
        else if (current != ' ')
            std::cout << current;
        previous = current;
    }   
}

int find_pow(int a) {
    int result = 0;
    int current_number_in_pow = 1;

    while (current_number_in_pow * 2 <= a) {
        current_number_in_pow *= 2;
        result++;     
    }
    return result;
}

void task_4() {
    int a;
    int T;
    int current_p;

    std::cin >> T;

    for (int i = 0; i < T; i++) {
        std::cin >> a;
        std::cout << find_pow(a) << std::endl;
    }
}
