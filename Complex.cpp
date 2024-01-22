#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(int r, int i)
    {
        this->real = r;
        this->imag = i;
    }

    // Oveloading condition
    Complex operator+(Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void Display()
    {
        cout << real << " + " << imag << " i" << endl;
    }
};
int main()
{

    Complex a(2, 3);
    Complex b(4, 5);
    Complex res = a + b;

    cout << "Result: \n";
    res.Display();

    return 0;
}