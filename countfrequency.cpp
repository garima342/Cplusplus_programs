#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    int A[10]={2,3,3,3,3,7,7,9,10,10};
    int n=10;
    int count=1;
    for(int i=1; i<=n; i++){
        if (A[i]==A[i-1]){
            count+=1;
        }
        else{
            cout<<count<<endl;
            count=1;
        }
    }
    system("pause");
    return 0;
}