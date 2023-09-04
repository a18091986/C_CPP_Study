#include <iostream>

#define ARR_SIZE 10

void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

void print_array (int * arr, int arr_size) {
    for (int i = 0; i < arr_size; ++i)
        std::cout << arr[i] << ' ';
    std::cout << "\n";
}

void fill_array(int * arr, int arr_size) {
    for (int *p = arr; p < arr + arr_size; ++p)
        std::cin >> *p;
}

void move_array(int * arr, int arr_size, int steps) {
    for (int i = 1; i <= steps; i++) {
        for (int *p = arr; p < arr + arr_size; p++) {
            if (p == arr + arr_size - 1)
                swap(p, arr + arr_size - 1);
            else
                swap(p, p + 1);
        }
    }
}

int find_element_in_array_by_size(int * arr, int arr_size, int find_value) {
    for (int i = 0; i < arr_size; ++i)
        if (arr[i] == find_value)
            return 1;
    return 0;
}

int find_element_in_array_by_pointers(int * start, int * after_end, int find_value) {
    for (; start != after_end; ++start)
        if (*start == find_value)
            return 1;
    return 0;
}

int * find_max_element_in_array_by_pointers(int * start, int * after_end) {
    int * pmax = start;
    for (; start != after_end; ++start)
        if (*pmax < *start)
            pmax = start;
    return pmax;
}

bool find_max_element_in_array_if_not_null(int * start, int * after_end, int * result) {
    if (start == after_end)
        return false;
    *result = *start;
    for (; start != after_end; start++)
        if (*start > * result)
            *result = *start;
    return true;
}

bool find_max_element_in_array_by_pointer_on_pointer(int * start, int * after_end, int ** result) {
    if (start == after_end)
        return false;
    *result = start;
    for (; start != after_end; start++)
        if (*start > **result)
            *result = start;
    return true;
}


int main() {
    int a = 0, b = 0;
    
    int arr[ARR_SIZE] = {1,2,3,4,5,10,7,8,9,1};
    int arr_null[] = {};

    // std::cout << "Веди переменную a: " << std::endl;
    // std::cin >> a;
    // std::cout << "Введи переменную b: " << std::endl;
    // std::cin >> b;

    // swap(&a, &b);

    // std::cout << "Переменная a: " << a << "\nПеременная b: " << b << "\n";

    // fill_array(arr, ARR_SIZE);

    print_array(arr, ARR_SIZE);
    move_array(arr, ARR_SIZE, 2);
    print_array(arr, ARR_SIZE);

    int is_element_in_array = find_element_in_array_by_size(arr, ARR_SIZE, 10);
    std::cout << (is_element_in_array ? "Элемент найден в массиве" : "Элемент в массиве не найден") << std::endl;

    is_element_in_array = find_element_in_array_by_pointers(arr, arr + ARR_SIZE, 10);
    std::cout << (is_element_in_array ? "Элемент найден в массиве" : "Элемент в массиве не найден") << std::endl;

    is_element_in_array = find_element_in_array_by_size(arr_null, 0, 10);
    std::cout << (is_element_in_array ? "Элемент найден в массиве" : "Элемент в массиве не найден") << std::endl;

    is_element_in_array = find_element_in_array_by_pointers(arr_null, arr_null + 1, 10);
    std::cout << (is_element_in_array ? "Элемент найден в массиве" : "Элемент в массиве не найден") << std::endl;

    std::cout << "Максимальный элемент в массиве: " << *(find_max_element_in_array_by_pointers(arr, arr + ARR_SIZE)) << std::endl;

    int max_element = 0;
    int is_max_in_array = find_max_element_in_array_if_not_null(arr_null, arr_null, &max_element);

    if (is_max_in_array)
        std::cout << "Максимальный элемент массива: "<< max_element << std::endl;
    else
        std::cout << "Пустой массив " << std::endl;

    int * pmax_element = NULL;
    if (find_max_element_in_array_by_pointer_on_pointer(arr, arr + ARR_SIZE, &pmax_element))
        std::cout << "Максимальный элемент: " << *pmax_element << std::endl;

    return 0;
}
