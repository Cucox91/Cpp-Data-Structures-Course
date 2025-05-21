#ifndef _ARITHMETIC_H_
#define _ARITHMETIC_H_

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T add()
    {
        T c;
        c = a + b;
        return c;
    }
    T sub()
    {
        T c;
        c = a - b;
        return c;
    }
};

#endif // _ARITHMETIC_H_
