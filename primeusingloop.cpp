#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n+1; i++){
        if (i==0 || i==1){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    for(int j=2; j<n+1; j++){
        if(arr[j]==1){
            cout<<j;
            for(int k=j; k*n+1; k+j){
                arr[k]=0;
            }
        }
    }
    system("pause");
    return 0;
}