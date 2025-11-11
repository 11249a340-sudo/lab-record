#include <iostream>
using namespace std;

class Counter {
    static int count;  // Static data member

public:
    // Constructor
    Counter() {
        count++;
    }

    // Static member function
    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

// Definition of static member outside the class
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;  // Each object increments count

    // Call static function using class name
    Counter::showCount();

    return 0;
}
