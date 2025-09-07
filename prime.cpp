#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(n%A[i]==0){
            count++;
        }
    }
        if(count==0){
            cout<<"prime";
        }
        else{
            cout<<"not prime";
        }
    system("pause");
    return 0;
}