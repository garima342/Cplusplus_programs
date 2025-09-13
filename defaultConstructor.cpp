#include<iostream>
#include<windows.h>
using namespace std;

class A{
    int a,b;
    public:
    A(){
        a=5;
        b=10;
    }
    int getA(){
        return a;
    }
};

int main(){
    A obj;
    cout << obj.getA() << endl;
    system("pause");
    return 0;
}