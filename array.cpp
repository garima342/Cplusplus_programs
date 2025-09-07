#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array elements are: " << endl;

    // Loop through the array
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " = " << numbers[i] << endl;
    }

    return 0;
}
