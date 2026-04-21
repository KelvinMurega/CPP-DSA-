#include <iostream>
using namespace std;

int main() {
    double x = 0, y = 20;

    do {
        y = y - 4;
        x = x + (2 / y);
    } while (y >= 6);

    cout << "Value of x: " << x << endl;

    system("pause");
    return 0;
}