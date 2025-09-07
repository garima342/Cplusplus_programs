#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
    srand(time(0));  // seed for random number generation
    int randomNum = rand() % 100 + 1;  // random number between 1 and 100
    int guess;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNum) {
            cout << "Too high! Try again.\n";
        } else if (guess < randomNum) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You've guessed the number.\n";
        }
    } while (guess != randomNum);
    system("pause");

    return 0;
}