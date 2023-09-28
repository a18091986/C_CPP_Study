#include <iostream>

void swap(int & a, int & b) {
    int temp = b;
    b = a;
    a = temp;
}


int main() {
    int a, b;
    int & l = a;
    std::cout << "Переменная a" << std::endl;
    std::cin >> a;
    std::cout << "Переменная b" << std::endl;
    std::cin >> b;

    swap(a, b);

    std::cout << "a: " << a << std::endl << "b: " << b << std::endl;
    std::cout << "Link: " << l << std::endl;
    
    return 0;
}