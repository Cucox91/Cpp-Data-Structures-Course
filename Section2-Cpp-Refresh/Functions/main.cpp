#include <iostream>

using namespace std;

int add(int a, int b) // This is the prototype or header of a function. Or signature.
{                     // The body is the "definition" of a function.
                      // a and b are named : "Formal Parameters"
    return a + b;
}

// Passed by value. This case will not work.  because the values are copied and never exchanged in reality.
void swap(int x, int y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
}

// Call by Address (Pointer). Here the values will change.
void swap_ptr(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

void swap_ref(int &x, int &y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
}

int main()
{
    int x = 10, y = 20, z = 0;
    z = add(x, y); // X and Y here are called "actual parameters".
    cout << "Original Sum: " << x << " + " << y << " = " << z << endl;

    cout << "Original Vars: " << x << ", " << y << endl;

    swap(x, y); // This will not swap the values because is being passed by value.
    cout << "Value SWAP Vars: " << x << ", " << y << endl;

    swap_ptr(&x, &y); // Here it will work because we are passing a pointer.
    cout << "Pointer SWAP Vars: " << x << ", " << y << endl;

    swap_ptr(&x, &y); // Here it will work because we are passing a reference like in C#.
    cout << "Reference SWAP Vars: " << x << ", " << y << endl;

    return 0;
}