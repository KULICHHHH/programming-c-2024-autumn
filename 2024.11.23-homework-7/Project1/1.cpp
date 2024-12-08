#include <iostream>

void addToEnd(int*& arr, int& size, int value) {
    // Увеличиваем размер массива
    int* newArr = new int[size + 1];

    // Копируем старые значения в новый массив
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // Добавляем новый элемент в конец
    newArr[size] = value;

    // Освобождаем память старого массива
    delete[] arr;

    // Указываем на новый массив
    arr = newArr;
    size++;
}

void addToStart(int*& arr, int& size, int value) {
    // Увеличиваем размер массива
    int* newArr = new int[size + 1];

    // Добавляем новый элемент в начало
    newArr[0] = value;

    // Копируем старые значения в новый массив
    for (int i = 0; i < size; i++) {
        newArr[i + 1] = arr[i];
    }

    // Освобождаем память старого массива
    delete[] arr;

    // Указываем на новый массив
    arr = newArr;
    size++;
}

void removeFromEnd(int*& arr, int& size) {
    if (size == 0) {
        std::cout << "Массив пуст. Невозможно удалить элемент." << std::endl;
        return;
    }

    // Уменьшаем размер массива
    int* newArr = new int[size - 1];

    // Копируем старые значения, кроме последнего
    for (int i = 0; i < size - 1; i++) {
        newArr[i] = arr[i];
    }

    // Освобождаем память старого массива
    delete[] arr;

    // Указываем на новый массив
    arr = newArr;
    size--;
}

void removeFromStart(int*& arr, int& size) {
    if (size == 0) {
        std::cout << "Массив пуст. Невозможно удалить элемент." << std::endl;
        return;
    }

    // Уменьшаем размер массива
    int* newArr = new int[size - 1];

    // Копируем старые значения, начиная со второго элемента
    for (int i = 0; i < size - 1; i++) {
        newArr[i] = arr[i + 1];
    }

    // Освобождаем память старого массива
    delete[] arr;

    // Указываем на новый массив
    arr = newArr;
    size--;
}

void display(const int* arr, int size) {
    if (size == 0) {
        std::cout << "Массив пуст." << std::endl;
        return;
    }

    std::cout << "Элементы массива: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* dynamicArray = nullptr; // Указатель на динамический массив
    int size = 0; // Текущий размер массива
    int choice, value;

    do {
        std::cout << "Выберите действие:\n";
        std::cout << "1. Добавить элемент в конец\n";
        std::cout << "2. Добавить элемент в начало\n";
        std::cout << "3. Удалить элемент из конца\n";
        std::cout << "4. Удалить элемент из начала\n";
        std::cout << "5. Показать элементы массива\n";
        std::cout << "0. Выход\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введите значение для добавления в конец: ";
            std::cin >> value;
            addToEnd(dynamicArray, size, value);
            break;
        case 2:
            std::cout << "Введите значение для добавления в начало: ";
            std::cin >> value;
            addToStart(dynamicArray, size, value);
            break;
        case 3:
            removeFromEnd(dynamicArray, size);
            break;
        case 4:
            removeFromStart(dynamicArray, size);
            break;
        case 5:
            display(dynamicArray, size);
            break;
        case 0:
            std::cout << "Выход из программы." << std::endl;
            break;
        default:
            std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
        }
    } while (choice != 0);

    // Освобождение памяти перед выходом
    delete[] dynamicArray;

    return 0;
}