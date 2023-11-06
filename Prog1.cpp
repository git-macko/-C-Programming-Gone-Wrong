#include <iostream>

using namespace std;

/*** 1)  Demonstrate an error where a function returns the address of a locally declared variable
rather than a dynamically allocated memory location.  Show that the value is changed inadvertently
by another variable. ***/

class Crate {
public:
    /* the error function */
    int * ErrorCrate(int x, int y) { //pointer function that takes int x and y
        int sum = x + y;
        return &sum; //supposedly returning the variable sum address
    }

    /* the solution of error function */
    int * SolutionCrate(int x, int y, int * sum) { //pointer function that takes int x, y and int pointer sum
        *sum = x + y; //using the pointer sum and returning the local variable sum
        return sum;
    }
};

int main() {
    Crate * c; //class pointer
    cout << "Error Crate Value: " << c->ErrorCrate(25, 25) << endl; //printing the address returned


    /* The solution would be declaring an int pointer sum and using it as a parameter
    and calling it as '* sum' for the real sum value and just simply 'sum' for the dynamically located address. */
    int * sum = new int;
    sum = c->SolutionCrate(25,25,sum);
    cout << "Solution Crate Value: " << *sum << ", Solution Crate Address: " << sum << endl;


    return 0;
}
