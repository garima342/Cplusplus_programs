#include <iostream>
using namespace std;

class Demo {
private:
    int a;         
protected:
    int b;         
public:
    int c;          

    void setData() { 
        a = 10;
        b = 20;
        c = 30;
    }
    void showData() {
        cout << "a (private): " << a << endl;
        cout << "b (protected): " << b << endl;
        cout << "c (public): " << c << endl;
    }
};

class Child : public Demo {
public:
    void accessData() {
    
        cout << "b (protected) from child: " << b << endl; 
        cout << "c (public) from child: " << c << endl;     
    }
};

int main() {
    Demo obj;
    obj.setData();
    obj.showData();

    Child ch;
    ch.setData();
    ch.accessData();

    cout << "Direct public access: " << obj.c << endl; 
    // cout << obj.a; // ❌ private
    // cout << obj.b; // ❌ protected
    system("pause");
    return 0;
}
