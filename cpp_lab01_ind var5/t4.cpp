#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double y = ((2 * x + 4) * x - 8) * x + 3;
    
    cout << "y = " << y << endl;
    
    return 0;
}