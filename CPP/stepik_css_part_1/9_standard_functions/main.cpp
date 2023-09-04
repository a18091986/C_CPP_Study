#include <algorithm>
#include <iostream>
// using namespace std;

#define ARRSIZE 15

void print_array(int * start, int * end) {
    for (; start != end; start++)
        std::cout << *start << " ";
    std::cout << std::endl;
}


int main() {
    
    int a[ARRSIZE] = {1,-2,3,4,5,-1,10,14,13,2,1,100,2};
    std::sort(a, a + 5);
    int *minptr = std::min_element(a, a + ARRSIZE);
    int *maxptr = std::max_element(a, a + ARRSIZE);
    print_array(a, a + ARRSIZE);
    std::cout << "MIN: " << *minptr << " MAX: " << *maxptr << std::endl;
}