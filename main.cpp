#include <iostream>
using namespace std;

int main() {
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
    int min = numbers[0];
    int result = 0;

    for (int i = 0; i < 15; ++i){
        if (numbers[i] < min) {
            min = numbers[i]; //узнаем минимальное число в массиве
        }
        result += numbers[i];
    }

    //из суммы всех элементов массива вычитаем сумму натурального ряда от минимального числа в массиве до 14 члена ряда
    result -= (((min + (min + 1 * (14 - 1))) * 14) / 2);

    cout << "Minimal number: " << min << endl;
    cout << "Repetitive number: " << result << endl;
    return 0;
}
