#include <iostream>


unsigned gcd(unsigned a, unsigned b) {

    int min_el = a <= b ? a : b;
    int max_el = a > b ? a : b;
    if (b == 0) 
        return a;
    return gcd(min_el, max_el % min_el);
}


void reverse() {
    unsigned current;
    char space;
    std::cin >> current;
    // std::cin >> space;
    if (current == 0)
        return;
    else
        reverse();
    std::cout << current << " ";
       
}


int main() {
    
    //////////////////////// НОД ////////////////////////////
    // int a, b;
    // std::cout << "Input a: \n";
    // std::cin >> a;
    // std::cout << "Input b: \n";0
    // std::cin >> b;
    // printf("%d\n", gcd(a, b));

    ////////////////////////reverse///////////////////////////


    // char * input_string = "4 2 3 0 1 2";
    reverse();

    // char space;
    // int num;
    // int counter = 0;
    // std::cin >> num;
    // while (num != 0) {
        
    //     // std::cin >> space;


        
    //     // std::cout << counter << std::endl;
    //     std::cout << num << " ";
    //     // std::cout << "SPACE: " << space << std::endl;
    //     std::cin >> num;
    //     counter++;   
             
    // }
    // std::cout << "null";
    // return 0;
}




