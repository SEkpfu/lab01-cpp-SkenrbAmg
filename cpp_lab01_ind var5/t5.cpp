#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    double x,y, s1, s2;
    cin >> x >> y;
    s1 = log(abs((y-sqrt(abs(x)) * (x-y/(x+x*x/4)))));
    s2 = (sin(x) + cos(y) / cos(x) - sin(x)) * tan(x*y);
    cout << showpos << fixed << setprecision(5) << s1 << endl;
    cout << noshowpos << fixed << setprecision(5) << s2 << endl;
    return 0;
}