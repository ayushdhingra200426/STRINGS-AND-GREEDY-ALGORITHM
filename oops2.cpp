// ABSTRACTION
// SHOWING ONLY FUNCTIONALITY AND HIDING DETAILS

// This is an example of multi-level inheritance
#include<iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class it is" << endl;
    }
};

class Child1 : public Parent {
public:
    void show() {
        cout << "Child 1 class it is" << endl;
    }
};

class Child2 : public Child1 {  // corrected: inherit from Child1, not Child2
public:
    void show() {
        cout << "Child 2 it is" << endl;
    }
};

int main() {
    Child2 c2;
    c2.show();
    return 0;
}
