#include <iostream>
using namespace std;

int main() {
    int a,a1,a2,a3;
    cout << "INPUT a" << endl;
    cin >> a;
    a1 = a / 100;
    a2 = (a % 100) / 10;
    a3 = a % 10;
    int s = a1+a2+a3;
    cout << "Summa=" << s << endl;
    cout << "naoborot=" << a3 << a2 << a1 << endl;
    return 0;
}
