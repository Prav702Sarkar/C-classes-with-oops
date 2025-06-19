#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        vtable->speakFunc(this);
    }

    struct VTable {
        void (*speakFunc)(Animal*);
    };

    VTable* vtable;
};

class Dog : public Animal {
public:
    Dog() {
        static VTable dogVTable = {Dog::speak};
        vtable = &dogVTable;
    }

    static void speak(Animal* self) {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        static VTable catVTable = {Cat::speak};
        vtable = &catVTable;
    }

    static void speak(Animal* self) {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* myPet;

    myPet = new Dog();
    myPet->speak();
    delete myPet;

    myPet = new Cat();
    myPet->speak();
    delete myPet;

    return 0;
}
