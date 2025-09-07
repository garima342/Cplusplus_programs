#include<iostream>
using namespace std;

class math{
    public:
    int multiply(int a, int b);
};

inline int math::multiply(int a, int b){
    return a*b;
}

int main(){
    math obj;
    cout<<"Product:"<<obj.multiply(8,7)<<endl;
    system("pause");
    return 0;
}