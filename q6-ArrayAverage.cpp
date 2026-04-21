#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    // Input values
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate average
    double average = sum / 5.0;

    cout << "Average: " << average << endl;

    system("pause");
    return 0;
}