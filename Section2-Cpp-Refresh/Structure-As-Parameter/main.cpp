#include <iostream>
#include <cstdlib>

using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
};

// Arrays inside structs.
struct Test
{
    int A[5];
    int n;
};

int area(struct Rectangle r1) // Passing by value. Changes done inside the function will NOT change the original.
{
    return r1.breadth * r1.lenght;
}

int area_ref(struct Rectangle &r1) // Passing by reference. Changes done inside the function WILL change the original.
{
    r1.breadth++; // This will change. the value.
    return r1.breadth * r1.lenght;
}

int change_lenght(struct Rectangle *ra, int new_lenght) // Passing by Address.
{
    ra->lenght += new_lenght;
}

void fun_struc_val(struct Test t1) // Struct Passed by value. Very Inefficient because structs can get really big. And In addition we are copying and will not change the values in the original.
{
}

void fun_struct_address(struct Test *t1)
{
    cout << "Before Change: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << t1->A[i] << endl;
    }

    t1->A[1] *= 10;
    t1->A[2] *= 100;
}

int main()
{
    struct Rectangle r = {10, 5};
    printf("%d\n", area(r));

    change_lenght(&r, 20);

    // For arrays inside structs.

    struct Test t = {{1, 2, 3, 4, 5}, 5};

    fun_struct_address(&t);

    cout << "After change: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << t.A[i] << endl;
    }

    return 0;
}