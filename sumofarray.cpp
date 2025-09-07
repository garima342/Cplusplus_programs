#include<iostream>
using namespace std;

int main(){
    int arr[]= {1,2,3,4};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    cout<<"Sum of elements of array is: "<<sum<<endl;
    system("pause");
    return 0;
}