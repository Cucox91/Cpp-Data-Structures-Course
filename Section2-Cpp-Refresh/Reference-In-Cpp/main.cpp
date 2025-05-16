#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a; // The & instead of * in front of the name means a reference not a pointer.

    cout << a << endl; // Will print 10.
    r++;
    cout << r << endl; // Will print 11. r is an alias.
    cout << a << endl; // Will print 11 too.

    int b = 25;
    r = b;             // This will assign 25 to a. Because r is already assigned to a.
    cout << b << endl; // Will print 25.
    cout << a << endl; // Will print 25 because we passed the value from b to a throw reference r.

    return 0;
}