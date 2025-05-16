#include <iostream>
#include <cstdlib> // This is the C++ version of <stdlib.h>
// #include <stdlib.h> // This is in C. And is a bad practice. Use <cstdlib>

using namespace std;

int main()
{
    /* Example for Pointers on the Stack: */

    cout << "Example for Pointers on the Stack:" << endl;

    int a = 10; // Data variable. This will go to the stack of the main function. And will take 4 bytes.
    int *p;     // Pointer variable. Notice that p will ocupy memory in the stack too, because those 4 bytes are needed to keep the address.

    p = &a; // initialization of the pointer.

    printf("%d\n", a); // This will return 10.

    printf("%d\n", *p); // Dereferencing: This will give me the value from a => 10.

    printf("%p\n", p); // This will give me the address of a => 10101876945688 (when printf("%d")) AND 10100x16fdfeb18 (when printf("%p") <= Hexadecimal)

    /* Example for Pointers on the HEAP: */

    cout << "Example for Pointers on the HEAP:" << endl;

    /* Example in C */
    int *cp;

    // Here we are allocating 20 bytes on the HEAP. Or in other words: 5 int in the HEAP.
    // Then we are assigning the address of the first int to the pointer cp.
    cp = (int *)malloc(5 * sizeof(int)); // On C we use malloc to allocate in the HEAP.
    cout << cp[1] << endl;

    free(cp); // Remember to always free the memory;

    /* Example in C++ */
    int *cpp;
    cpp = new int[5]; // This will be allocated on the HEAP Too.
    cout << cpp[1] << endl;

    delete[] cpp; // Remember to always free the memory;

    /* Example of giving an array to a pointer */

    int A[5] = {2, 4, 6, 8, 10};
    int *px;
    // px = &A[0]; // Notice here we are assigning the address (&) of the first element.
    px = A; // This will be the same as the line above.

    delete[] px; // This will NOT work, becuase remember that this is a pointer to an array variable. And array variables are stored in the Stack, not in the HEAP.

    return 0;
}