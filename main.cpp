#include "iostream"  // Підключення бібліотеки для вводу/виводу
#include "cmath"     // Підключення бібліотеки для математичних функцій

using namespace std; // Використання стандартного простору імен

int main() {

    double z1, z2, a; // Оголошення змінних для обчислень

    // Запит значення змінної 'a' у користувача
    cout << "a = ";
    cin >> a; // Зчитування значення змінної 'a' з вводу

    // Обчислення значення виразу для 'z1'
    z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);

    // Обчислення значення виразу для 'z2'
    z2 = (4 * cos(a / 2)) * cos((5.0 / 2) * a) * cos(4 * a);

    // Виведення результатів на екран
    cout << "z1 = " << z1 << endl; // Виведення значення 'z1'
    cout << "z2 = " << z2 << endl; // Виведення значення 'z2'

    return 0; // Завершення програми
}
