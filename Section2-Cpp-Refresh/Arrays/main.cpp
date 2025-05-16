#include <iostream>

using namespace std;

int main()
{
    // int size is 4 bytes.

    int A[5];

    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    int B[8] = {10, 20, 30, 40, 50}; // If we initialize to a larger size the rest of the item will be zero.

    cout << sizeof(A) << endl; // C++ Style.

    printf("%d\n", B[1]); // Same as in C.

    // For Array A notice the differnece on the assigned values.

    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << endl;
    }

    // Here B will have items that are set and the rest will be 0;
    for (int i = 0; i < 8; i++)
    {
        cout << B[i] << endl;
    }

    // Foreach style loop
    for (int x : A)
    {
        cout << x << endl;
    }

    // Dynamically assing arrays is not allowed.

    int n;
    cout << "Enter Size of an array" << endl;
    cin >> n;

    // int X[n] {0};       // This will not work because we cannot initialize if we are inputing the size dynamically.

    // the only solution is to assign them after manually either assignemnt or for loop.

    cout << "Playing with array initialization: " <<endl;

    int X[n];
    for (int i = 0; i < n; i++)
    {
        X[i] = 0;
    }

    for (int res : X)
    {
        cout << res << endl;
    }

    return 0;
}