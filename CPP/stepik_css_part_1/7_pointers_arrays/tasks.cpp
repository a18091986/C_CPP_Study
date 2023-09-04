#include <iostream>

void calculate_string_length(const char * start, int * result) {
    int count = 0;
    while (*start != '\0') {
        start++;
        count++;
    }
    *result = count;
}

unsigned calculate_string_length_var_2(const char * string) {
    unsigned len = 0;
    while (*string++)
        len++;
    return len;
}

void strcat(char * to, const char * from) {
    unsigned to_size = calculate_string_length_var_2(to);
    while (*from) {
        to[to_size] = *from;  
        to_size++;      
        *from++;
    }
}

int strstr(const char * text, const char * pattern) {
    if (!*pattern)
        return 0;
    int match = 0;
    int j = 0;
    for (; *text != '\0'; text++, j++) {
        if (*text == *pattern) {
            match = 1;
            for (int i = 0; pattern[i] != '\0'; i++) {
                if (text[i] == pattern[i])
                    continue;
                else {
                    match = 0;
                    break;
                }
            }
        if (match)
            return j;
        }
    }
    return -1;
}

int main() {

    int result = 0;
    calculate_string_length("test", &result);
    std::cout << "Длина строки 'test': " << result << std::endl;

    std::cout << "Длина строки 'test_test': " << calculate_string_length_var_2("test_test") << std::endl;

    char * to = new char [20] {"123456578"};
    const char * from = "test";
    strcat(to, from);

    std::cout << "Конкатенация строк 'test_' и 'test': " << to << std::endl;
    
    const char * text = "somestringd";
    const char * pattern = "";
    
    std::cout << strstr(text, pattern) << std::endl;

    return 0;
}