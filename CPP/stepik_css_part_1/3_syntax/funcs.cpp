#include "funcs.hpp"

void first_example () {

    int i = 42;
    double d = 3.14;
    const char * s = "C-style string";
    bool b = true;


    std::cout << "This is an integer " << i << endl;
    std::cout << "This is a double " << d << endl;
    std::cout << "This is a \"" << s << "\"" << endl;
    std::cout << "This is a bool" << b << endl;

}

void second_example () {
    int int_num;
    double double_num;
    std::cout << "Enter an integer number and double number\n";
    std::cin >> int_num >> double_num;
    std::cout << "You enter int_num: " << int_num << " double_num: " << double_num << endl;
}

int power(int x, unsigned p) {
    int res = 1;
    for (int i = 0; i < p; i++) {
        res *= x;
    }
    return res;
}