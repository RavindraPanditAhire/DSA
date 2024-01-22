#include <iostream>
using namespace std;

class Parent
{
public:
    // pure Virtual function
    virtual void print() = 0;

    void print1()
    {
        cout << "this is Parent class...\n";
    }
};

class Child : public Parent
{

public:

    // Overriding the Pure Virtual Function
    void print() override
    {
        cout << "this is Child Class....\n";
    }
};
int main()
{

    Child c;
    // poinrter for access Super funtion
    Parent *p = &c;
    p->print();
    p->print1();

    return 0;
}