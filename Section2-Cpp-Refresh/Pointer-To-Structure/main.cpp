#include <iostream>

using namespace std;

// Size 8 bytes.
struct Rectangle
{
    int width;
    int breadht;
};

int main()
{
    // Statically Creating a pointer to rectangle.

    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r; // The size of this pointer is 4 bytes.

    r.breadht = 15;

    cout << "Rectangle Original Obj: Width: " << r.width << " Breadht: " << r.breadht << endl;

    // p.width = 20; // This doesnt work. We need to use (->)

    p->width = 20;     // This will work. Both in C and C++.
    (*p).breadht = 20; // This is valid too.

    cout << "Rectangle from Static Pointer: Width: " << p->width << " Breadht: " << p->breadht << endl;

    // Dynamically creating a pointer to rectangle. In C
    struct Rectangle *pdc;

    pdc = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // This is in C

    pdc->breadht = 10;
    pdc->width = 20;

    cout << "Rectangle Dynamically Allocated in C: Width: " << pdc->width << " Breadht: " << pdc->breadht << endl;

    free(pdc);

    // Dynamically creating a pointer to rectangle. In C++

    struct Rectangle *pdcpp = new struct Rectangle;

    pdcpp->breadht = 20;
    pdcpp->width = 30;

    cout << "Rectangle Dynamically Allocated in C++: Width: " << pdcpp->width << " Breadht: " << pdcpp->breadht << endl;

    delete pdcpp;

    return 0;
}