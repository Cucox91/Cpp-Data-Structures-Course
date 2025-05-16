#include <iostream>

using namespace std;

// Definition (This struct is 8 bytes size because each int is 4 bytes)
struct Rectangle
{
    int breadht;
    int breadth;
    char x;
};

/*
    Complex Number Example:
    Remember that a complex number is given in the way: a +ib where i = sqrt(-1)
*/
// Size: 8 bytes.
struct Complex
{
    int real;
    int imaginary;
};

// Size: 89 bytes -> int: 4 bytes, char: 1 byte.
struct Student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};

// Size: 12 bytes.
struct Card
{
    int face;  // A = 1, 2, 3, ... , J = 11, Q = 12, K = 13.
    int shape; // club = 0, spades = 1, hearts = 2, diamonds = 4.
    int color; // black = 0, red = 1.
};

int main()
{
    // Declaration.
    // struct Rectangle r;

    // Declaration plus initialization.
    struct Rectangle r = {10, 5};

    r.breadht = 10;
    r.breadth = 5;

    printf("Area of rectangle is: %d \n", r.breadth * r.breadht);

    struct Card c;
    c.face = 0;
    c.shape = 0,
    c.color = 1;

    // Array of structure:
    // struct Card desck[52];      // Size = 52 * 12 = 642 bytes.

    struct Card deck[52] =
        {
            {1, 0, 0},
            {2, 0, 0}};

    printf("Face: %d\n", deck[0].face);
    printf("Shape: %d\n", deck[0].shape);
    printf("Color: %d\n", deck[0].color);

    printf("Size of Rectangle from printf: %lu \n", sizeof(r)); // Notice that when x is a char that is using 1 byte it will allocate 4.

    cout << "Size of the Rectangle from cout: " << sizeof(r) << endl; // It will be same size.

    return 0;
}