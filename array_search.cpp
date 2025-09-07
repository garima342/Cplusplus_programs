#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search: ";
    int target;
    cin>>target;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            cout<<"Element found at index: "<<i;
            return 0;
        }
    }
    cout<<"Element not found";
    return 0;
}