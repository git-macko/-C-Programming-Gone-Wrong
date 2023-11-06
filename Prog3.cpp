#include <iostream>

using namespace std;

/* 3) Demonstrate an error where you reference a deleted memory location.
 Show that the value is changed inadvertently by another variable. */

int main() {

    int * MemoPtr = new int[1]; //declaring array pointer
    MemoPtr[0] = 32; //assign a value of 32 in position 0

    //printing MemoPtr in position 0
    cout << "Memory Size: " << MemoPtr[0] << "GB" << endl;

    delete[] MemoPtr; //deleting array MemoPtr

    int DeletedMemo = MemoPtr[0]; //referencing deleted array

    //printing MemoPtr in position 0 after deletion
    cout << "Deleted Memory Size: " << DeletedMemo << "GB" << endl;
    return 0;
}
