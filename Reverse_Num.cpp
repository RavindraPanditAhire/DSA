#include <iostream>
using namespace std;

int main()
{

    int n;
    int reverse = 0;
    cout << "Enter Number to reverse it: ";
    cin >> n;

    int lastdigit = 0;

    while (n > 0)
    {
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }

    cout << "Reverse Number: " << reverse;
    return 0;
}