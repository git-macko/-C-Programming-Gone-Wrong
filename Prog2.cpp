#include <iostream>

using namespace std;

void MemoryLeak() {
    int * pointer = new int(5);
    return; ///return without deallocating pointer
}

int main() {
    MemoryLeak(); ///calling this function to get memory leak

    return 0;
}
