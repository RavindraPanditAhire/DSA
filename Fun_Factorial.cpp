#include <iostream>
using namespace std;

long Factorial(int num)
{
    int result = 1;
    for (int i = num; i >= 1; i--)
    {
        result = result * i;
    }
    return result;
}

int main()
{

    int n;
    cin >> n;
    cout << Factorial(n);

    return 0;
}