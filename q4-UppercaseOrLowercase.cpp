#include <iostream>
using namespace std;

// Function to check if uppercase
bool isUppercase(char c) {
    return (c >= 'A' && c <= 'Z');
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isUppercase(ch)) {
        cout << ch << " is an uppercase letter." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
    } else {
        cout<< ch << " is not a letter." << endl;
    }

    system("pause");
    return 0;

}