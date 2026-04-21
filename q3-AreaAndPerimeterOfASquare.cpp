#include <iostream>
using namespace std;

// Function to calculate area of a square
double calculateArea(double side) {
    return side * side;
}

// Function to calculate perimeter of a square
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter the length of the side of the square: ";
    cin >> side;

    double area = calculateArea(side);
    double perimeter = calculatePerimeter(side);

    cout << "Area of the square: " << area << endl;
    cout << "Perimeter of the square: " << perimeter << endl;

    system("pause");
    return 0;
}