#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
    srand(time(0));
    cout<<"Welcome! Let's start the game of Ludo.\n";
    int p1, p2;
    char choice;

while(true){
    do{
        cout << "Roll the dice...";
        cin>>p1;
        Sleep(1000);
        cout << "Player 1 rolled: " << p1 << endl;
        Sleep(1000);    
        p2 = rand() % 6 + 1;
        cout << "Player 2 rolled: " << p2 << endl;
        if (p1==6 || p2 == 6) {
            cout << "Congrats! You rolled a 6. You get another turn!\n";
        }
        if (p1>6 || p2>6){
            cout<<"Wrong input. Please enter a valid dice roll (1-6).\n";
        }
        cout << "\nDo you want to continue the game? (Y/N): ";
        cin >> choice;
    } while(choice =='Y' || choice =='y');
    if (choice == 'N' || choice == 'n') break;
}
cout<<"\nWell played. Thank you for playing!\n";
system("pause");
return 0;
}