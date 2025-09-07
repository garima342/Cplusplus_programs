/*Program to find second largest element in an array*/
#include<iostream>
#include<windows.h>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int second_largest=INT_MIN;
    for(int j=0; j<n; j++){
        if(arr[j]>largest){
            second_largest=largest;
            largest=arr[j];
        }
        else if(arr[j]>second_largest && arr[j]<largest){
            second_largest=arr[j];
        }
    }
    cout<<"Second largest element is: "<<second_largest;
    system("pause");
    return 0;
}
