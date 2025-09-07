#include<iostream>
#include<windows.h>
using namespace std;

class math{
    public:
    int add(int a, int b){
        return a+b;
    }
};

int main(){
    math obj;
    cout<<"Sum:"<<obj.add(8,7)<<endl;
    system("pause");
    return 0;
}