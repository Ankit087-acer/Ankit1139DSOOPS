#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() = 0; 
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
    Animal* ptr; 
    Dog dogObj;
    Cat catObj;
    ptr = &dogObj;
    ptr->makeSound(); 
    ptr = &catObj;
    return 0;
}
