#include <iostream>

#include <iostream>

char *resize(char *str, unsigned size, unsigned new_size) { // функция из прошлой задачи
	char * new_str = new char[new_size];
	unsigned to_move = new_size > size ? size : new_size;
	for (unsigned i = 0; i < to_move; ++i) {
		new_str[i] = str[i];
	}
	delete [] str;
	return new_str;
}

char *getline() {
	char c = '\0'; //инициализация контейнера
	unsigned current_size = 10; // начальный размер - 10
	char * str = new char[current_size];
	unsigned i; //счётчик

	for (i = 0; std::cin.get(c) && c != '\n'; ++i) { // ходим до конца ввода
		str[i] = c; // пишем символ
		//если приближаемся к концу увеличиваем массив в 1,5 раза
        //(current_size - 2) потому что надо оставить место под \0 на случай если это последняя итерация
		if (i == current_size - 2) str = resize(str, current_size, current_size *= 1.5);
	} 
	str[i] = '\0'; // добавляем в конце
	return resize(str, current_size, i + 1); // подгоняем финальный размер (i + 1) в целях экономии
}




int main() {
    // char * first_arr = new char [10];
    // first_arr[1] = 's';
    // for (int i = 0; i < 12; i++)
    //     std::cout << first_arr[i] << std::endl;
    char * str;
    str = getline();
    std::cout << str[1] << std::endl;
}