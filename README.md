C++ Programming-Gone-Wrong

Language: C++

Programming Gone Wrong are 5 program mistakes and errors that can happen.

1) Demonstrate an error where a function returns the address of a locally declared variable
rather than a dynamically allocated memory location.  Show that the value is changed inadvertently
by another variable.

2) Demonstrates Memory Leaks in a simplest way possible.

3) Demonstrate an error where you reference a deleted memory location.
 Show that the value is changed inadvertently by another variable.

4) Demonstrate an error where you fail to use a virtual destructor
and you delete an object of an inherited class and it causes a memory
leak or  unexpected behavior.

5) Demonstrate an error where you perform a shallow copy of a pointer-based data
structure (eg, linked list from assignment #4) when you really should be performing a
deep copy.  You can either demonstrate this through the values inadvertently changing,
or by demonstrating errors when you call the destructor on both copies.
