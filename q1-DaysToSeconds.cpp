#include <iostream>
using namespace std;

int main() {
    int days;
    // Ask user for number of days
    cout << "Enter number of days: ";
    cin >> days;

    long long seconds = days * 24 * 60 * 60;
    cout << days << " days = " << seconds << " seconds." << endl;

    system("pause");
    return 0;
}