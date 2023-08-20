#include <iostream>
#define MAX(x, y, r) {if (x > y) r = x; else r = y; return r}


int main() {
    std::cout << MAX(1, 2, 3) << endl;

    return 0;
}