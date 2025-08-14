#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function → Abstract class
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal* ptr; // Pointer to base class

    Dog dogObj;
    Cat catObj;

    ptr = &dogObj;
    ptr->makeSound(); // Calls Dog's version

    ptr = &catObj;
    ptr->makeSound(); // Calls Cat's version

    return 0;
}
