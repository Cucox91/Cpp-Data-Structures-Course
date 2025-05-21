#include <iostream>
#include "Arithmetic.h"

using namespace std;

int main()
{
    class Arithmetic<int> a1 = Arithmetic(10, 20);
    cout << "Sum of Arithmetic: " << a1.add() << endl;
    cout << "Sub of Arithmetic: " << a1.sub() << endl;

    Arithmetic<float> a2 = Arithmetic(10.55f, 20.26f);
    cout << "Sum of Arithmetic: " << a2.add() << endl;
    cout << "Sub of Arithmetic: " << a2.sub() << endl;

    return 0;
}