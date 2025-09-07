#include<iostream>
#include<windows.h>
using namespace std;

int main(){
      system("CLS");  // clear screen each update
      cout << "Downloading...\n\n";
      Sleep(1000);

      
      for (int i=0; i<=5; i++){
        cout << "[";
          for (int j=0; j<=i; j++){
              cout<<"=";
          }
          cout << "] " << i*20 << "%"<<endl;
          Sleep(1000);
      }
    cout << endl;
    cout<<"Downloaded successfully!\n";
    system("pause");
    return 0;
}