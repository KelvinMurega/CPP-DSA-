#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, volume;

    cout << "Enter radius: ";
    cin >> radius;

    // Formula: (4/3) * PI * r^3
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    cout << "Volume of sphere: " << volume << endl;

    system("pause");
    return 0;
}