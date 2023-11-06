#include <iostream>

using namespace std;

/*** 5)  Demonstrate an error where you perform a shallow copy of a pointer-based data
structure (eg, linked list from assignment #4) when you really should be performing a
deep copy.  You can either demonstrate this through the values inadvertently changing,
or by demonstrating errors when you call the destructor on both copies. ***/

class Taco {
private:
    string * meat;
    int * quantity;

public:
    void setTaco(string * meat, int quantity) { //getters and setters for pointer data structure;
        this->meat = meat;
        this->quantity = &quantity;
    }
    void serveTaco() { //printing the values
        cout << "Now serving: " << *quantity << " pieces of " << *meat << " taco." << endl;
    }
    ~Taco() { //destructor that deletes meat and quantity
        cout << "Taco Destructor." << endl;
        delete meat;
        delete quantity;
    }
};

int main() {
    string thiccmeat[1] = {"Beef"};
    string * meat = thiccmeat;
    /* Whatever you do in the original will also happen to the shallow copy */
    Taco * t;
    t->setTaco(meat, 5);
    t->serveTaco();

    cout << "---------------------------------------------" << endl;
    cout << "Deleting Base Taco." << endl;
    t->~Taco(); //calling the destructor and deleting the contents of the original.
    cout << "---------------------------------------------" << endl;

    /* This shallow copy will be deleted as well since it's basing of the original copy that got deleted. */
    Taco * copy = t;
    copy->serveTaco();
    copy->~Taco();



    return 0;
}
