//
//  main.cpp
//  lab0
//

#include <iostream>

const int SIZEOFARRAY = 8;

int main(int argc, const char * argv[]) {
    // Задаю начальный массив
    int array[SIZEOFARRAY] = {1, 3, 6, 7, 1, 9, 3, 1};
    // Задаю массив ответа
    int *answer = new int [100];
    // Ищу максимальный элемент в начальном
    int max = 0;
    for (int i = 0; i < SIZEOFARRAY; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    //Прохожу по всем числам от 1 до max и ищу их вхождение
    //В исходный, если не входит -> добавляю в answer
    int answerIndex = 0;
    for (int i = 1; i <= max; i++) {
        bool find = false;
        // По исходному пробег, при нахождении выходит
        for (int j = 0; j < SIZEOFARRAY && find == false; j++) {
            if (array[j] == i) {
                find = true;
            }
        }
        if (find == false) {
            answer[answerIndex] = i;
            answerIndex++;
        }
    }
    // Вывод
    std::cout << "[";
    for (int i = 0; i < answerIndex; i++) {
        std::cout << answer[i] << ", ";
    }
    std::cout << "]\n";
    return 0;
}
