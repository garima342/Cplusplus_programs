#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
    srand(time(0));
    char c;
    do{
        cout<<"Do you want to play a car racing game? (Y/N):";
        cin>>c;
        cout<<endl;
        int a, b;
        if(c=='Y' || c=='y'){
            cout<<"Great! Let's start the game."<<endl;
            a = rand()%20;
            b = rand()%20;
            int p1=0, p2=0;
            {
                for(int i=0; i<=a; i++)
                {
                    Sleep(100);
                    cout<<"-";
                    p1++;
                }
                cout<<"Car 1 "<<endl;
                for (int j=0; j<=b; j++)
                {
                    Sleep(100);
                    cout<<"-";
                    p2++;
                }
                cout<<"Car 2"<<endl;
                if(p1>p2)
                    cout<<"Car 1 wins!"<<endl;
                else if(p2>p1)
                    cout<<"Car 2 wins!"<<endl;
                else
                    cout<<"It's a tie!"<<endl;
            }
        }
    }while(c!='N' && c!='n');
    cout<<"Thank you for playing!"<<endl;
    system("pause");
    return 0;
}