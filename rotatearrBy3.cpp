#include <iostream>
using namespace std;

int main() {
    int n;
    /*Array ka size lenge yahan*/
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    cout << "Enter " << n << " elements:" << endl;
    /*Array ke elements input karwa denge*/
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    for (int j=0; j<3; j++){
        int temp=A[n-1];
        for (int i=n-1; i>0; i--){
            A[i]=A[i-1];
        }
         A[0]=temp;
    }
    cout<<"Array after rotation of three positions:";
    for (int k=0; k<n; k++){
        cout<<A[k]<<" ";
    }
    return 0;
}