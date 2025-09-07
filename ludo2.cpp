#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
    int p1, p2;
    cout<<"Welcome to Ludo game\n";
    cout<<"You are player 1!\n"<<"Let's play^^\n\n";
    while(true){
        cout<<"Your turn:";
        cin>>p1;

    cout<<"p1"<<p1<<endl;
    srand(time(0));
    p2=(rand()%6)+1;
    cout<<"p2's turn:"<<p2<<endl;
    Sleep(1000);
}
 if(p1>6){
    cout<<"Wrong input. Do you want to continue the game? (Y/N):";
    char c;
    cin>>c;
        if (c=='N'||c=='n'){
            cout<<"\n\n Thanks for playing. ^^";
            exit(0);
        }
    }
    system("pause");
return 0;
}