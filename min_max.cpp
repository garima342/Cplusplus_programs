#include <iostream>
using namespace std;

int main() {
    int array[100], min, max, n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    min = array[0];
    max = array[0];
    for (int i =0; i<n; i++){
        if (array[i]<min){
            min = array[i];
        }
        if (array[i]>max){
            max=array[i];
        }
    }
    cout << min <<" "<< max << endl;
}