#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    string name;

public:
    void inputData() {
        cout << "Name: ";
        cin >> name;
        cout << "Roll No.: ";
        cin >> rollno;
    }
    void displaydata() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollno << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* s = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].inputData();
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        s[i].displaydata();
    }

    delete[] s;
    system("pause");
    return 0;
}
