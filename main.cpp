#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int size;
    cout << "Введите размер массива:";
    cin >> size;
    int numbers[size];
    int sum = 0;
    int product = 1;
    cout << "Введите " << size << "чисел :" << endl;
    for (int i = 0; i < size; i++) {
        cout << "×èñëî " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
        product *= numbers[i];
    }
    cout << "Сумма чисел: " << sum << endl;
    cout << "Произведение чисел " << product << endl;
    return 0;
}
