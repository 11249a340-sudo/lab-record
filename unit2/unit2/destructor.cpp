#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    cout << "Creating object s1..." << endl;
    Student s1(1, "Alice");

    cout << "Creating object s2..." << endl;
    Student s2(2, "Bob");

    cout << "Displaying objects..." << endl;
    s1.display();
    s2.display();

    cout << "Exiting main..." << endl;

    return 0;
}
