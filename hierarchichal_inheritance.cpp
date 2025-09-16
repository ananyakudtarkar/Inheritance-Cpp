#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};

class whitecat : public Cat {
public:
    void  colour() {
        cout << "The white cat is white." << endl;
    }
};
class blackcat : public Cat {
public:
    void colour() {
        cout << "The black cat is black." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    whitecat wc;
    blackcat bc;

    cout << "Dog actions:" << endl;
    dog.eat();
    dog.bark();

    cout << "\nCat actions:" << endl;
    cat.eat();
    cat.meow();

    cout << "\nWhite Cat actions:" << endl;
    wc.eat();
    wc.meow();
    wc.colour();

    cout << "\nBlack Cat actions:" << endl;
    bc.eat();
    bc.meow();
    bc.colour();

    return 0;
}

/*
OUTPUT
Dog actions:
This animal eats food.
The dog barks.

Cat actions:
This animal eats food.
The cat meows.

White Cat actions:
This animal eats food.
The cat meows.
The white cat is white.

Black Cat actions:
This animal eats food.
The cat meows.
The black cat is black.
*/
