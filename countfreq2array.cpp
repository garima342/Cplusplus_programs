#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    int A[10]={2,5,5,6,6,6,8,9,9,13};
    int B[11]={1,2,2,5,5,6,9,13,13,15};
    int n=10, m=11;
    int i=0, j=0;
    while(i<n && j<m){
        if(A[i]==B[j]){
            cout<<A[i]<<" ";
            i++;
            j++;
        }
        else if (A[i]<B[j]){
            i++;
        }
        else{
            j++;
        }
    }
    system("pause");
    return 0;
}