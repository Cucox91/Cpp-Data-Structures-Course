#include <iostream>
#include <cstdlib>

using namespace std;

// int fun(int *A, int size)  // This is valid too. But is more recommended the [] option for arrays.
void fun(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << endl;
    }
}

int *fun_return_array(int n) // We do this to return arrays. What we return is (int *) type. Or a pointer to the first element of th array.
{
    int *p;
    p = (int *)malloc(n * sizeof(int)); // Notice that (int *) is casting to type pointer of int. That is the reason why the * is to the right.
    return p;
}

int main()
{
    int X[5] = {1, 2, 3, 4, 5};
    fun(X, 5);

    int *A;
    A = fun_return_array(5);

    return 0;
}