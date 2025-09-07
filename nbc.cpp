#include <iostream>
#include <string>
using namespace std;
int main() {
   string branch;
   float amount, payable, discount;
   cout << "Enter branch: (J for Jaipur, M for Mumbai, V for Varanasi): ";
   cin >> branch;
   cout << "Enter amount: ";
   cin >> amount;
   if (branch == "J" || branch == "j")
   {
      discount = amount * 0.5;
      payable = amount - discount;
      cout << "Branch: Jaipur -- Offer available \n";
      cout << "Discount: " << discount << endl;
      cout << "Amount: " << amount << endl;
      cout << "Payable: " << payable << endl;
   } else if (branch == "M" || branch == "m") {
      discount = amount * 0.5;
      payable = amount - discount;
      cout << "Branch: Mumbai -- Offer available \n";
      cout << "Discount: " << discount << endl;
      cout << "Amount: " << amount << endl;
      cout << "Payable: " << payable << endl;
   } else if (branch == "V" || branch == "v") {
      discount = 0;
      payable = amount - discount;  
      cout << "Branch: Varanasi -- Offer not available \n";
      cout << "Discount: " << discount << endl;
      cout << "Amount: " << amount << endl;
      cout << "Payable: " << payable << endl;
   } else {
      cout << "Invalid branch!" << endl;
      return 1;
   }
    return 0;
}