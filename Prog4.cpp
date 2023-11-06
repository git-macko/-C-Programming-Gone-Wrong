#include <iostream>

using namespace std;

/* 4) Demonstrate an error where you fail to use a virtual destructor
and you delete an object of an inherited class and it causes a memory
leak or  unexpected behavior. */

class Human { ///Human Class - as Base class
public:
    Human() {
        cout << "I am Human." << endl;
    }
    ~Human() { //Base class destructor that isn't virtual.
        cout << "I am Human Destructor." << endl;
    }
};

class Doggo : public Human { ///Doggo Class - as Derived class
private:
    string breed; //memory
public:
    Doggo(const string& doggobreed) {
        breed = doggobreed; //assigning a string value to the doggo memory
        cout << "I am Doggo and I'm built " << breed << endl;
    }
    ~Doggo() { //a destructor that would not be called that will create memory leak.
        cout << "I am Doggo Destructor." << endl;
    }
};

int main() {

    Human * h = new Human;
    Human * doggo = new Doggo("Husky");
    delete h;
    /* Delete is invoked on pointer h. At code execution, the compiler only knows
    to call the Human's Destructor(Base Class) while the destructor associated with
    Doggo(Derived Class) is not called and the value is not deallocated, A memory leak occurs! */


    return 0;
}
