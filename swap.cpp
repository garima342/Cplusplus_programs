/*Element swapping program*/
#include<iostream>
#include<windows.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int f=0;
    for(int j=0; j<=n; j++){
        for(int i=0; i<=(n-2); i++){
            if(A[i]>A[i+1]){
                swap(A[i], A[i+1]);
                f=1;
            }
            
            else if(f==0){
                break;
            }
        }
    }
    cout<<"Sorted elements: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    system("pause");
    return 0;
}