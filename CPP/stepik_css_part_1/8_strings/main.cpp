#include <iostream>
#include <cstring>

int main() {
    char str[100] = "left part";
    strcat(str, " right part");
    size_t length = strlen(str);

    std::cout << "New string: " << str << ", length: "<< length << std::endl;
}

