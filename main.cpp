#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int size = 5;
    int numbers[size];
    int sum = 0;
    int product = 1;
    cout << "������� " << size << " �����:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "����� " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
        product *= numbers[i];
    }
    cout << "����� �����: " << sum << endl;
    cout << "������������ �����: " << product << endl;
    return 0;
}
