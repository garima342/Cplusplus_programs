#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;

class A{
    char name[5];
    int a;
    public:
    A(int aa, const char s[5]){
        a=aa;
        strcpy(name,s);
    }
    void display(){
        cout << a << " " << name << endl;
    }
};

int main(){
    A ff(4, "MCA");
    ff.display();

    system("pause");
    return 0;
}