#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int age;

public:
    // Constructor with parameters
    Student(string n, int r, int a) {
        name = n;
        rollNo = r;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create Student object - constructor is called
    Student s1("John", 101, 20);

    cout << "Student Details:" << endl;
    s1.display();

    return 0;
}
