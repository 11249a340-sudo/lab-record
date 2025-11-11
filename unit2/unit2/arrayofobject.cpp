#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    void getData() {
        cout << "Enter Roll and Name: ";
        cin >> roll >> name;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s[5]; // Array of 5 student objects

    // Input data for all students
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        s[i].getData();
    }

    // Display data of all students
    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        s[i].display();
    }

    return 0;
}
