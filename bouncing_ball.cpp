#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    int pos=0;
    int dir=1;
    int width=5;
    while(true){
        for (int i=0; i<pos; i++){
            cout<<" ";
        }
        cout<<"o"<<endl;
        Sleep(500);
        

        pos+=dir;
        if(pos>width) dir--;
        if(pos==0) dir++;
    }
    return 0;
}