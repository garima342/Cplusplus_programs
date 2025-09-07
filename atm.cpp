#include<iostream>
using namespace std;

class ATM{
public:
int amountavailable = 4000;
    
    void deposit(int x){
        int dep;
        cout<<"Enter the amount you want to deposit:"<<endl;
        cin>>dep;
        amountavailable += dep;
        cout<<"Your amount of"<<dep<<"has been deposited."<<endl;
    }

    void withdraw(int y){
        int withdraw;
        cout<<"Enter the amount you want to withdraw:"<<endl;
        cin>>withdraw;
        amountavailable -= withdraw;
        cout<<"Please wait a moment! Your required amount is being withdrawed.";
    }

    void checkbal(int z){
        cout<<"Your available balance is"<< amountavailable <<endl;
    }

};

int main(){
    ATM a;
    a.deposit(2000);
    
}