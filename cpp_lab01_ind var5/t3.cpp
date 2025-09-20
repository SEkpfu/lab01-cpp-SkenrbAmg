#include <iostream>
#include <cmath>
using namespace std;

int main()
 {  setlocale(0, "");
    int a, b, c;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;
    (a % 2 != 0) ? cout << "Сумма: " << b + c << ", Произведение: " << b * c : cout << "Минимум: " << min(a, c);
    return 0;
}