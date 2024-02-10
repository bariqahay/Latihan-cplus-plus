#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a1, volume, jari, luasper;
    int a2;
    const float phi = 3.1416;

    cin >> a1;
    cout << endl;
    cin >> a2;

    jari = a1 / 2;
    volume = phi * pow(jari, 2) * a2;
    luasper = (2 * phi * jari * a2) + (2 * phi * pow(jari, 2));

    cout << volume << endl;
    cout << luasper << endl;

    return 0;
}
