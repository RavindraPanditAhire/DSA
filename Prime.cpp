#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter Number to check Prime or Not: " << endl;
    int n;
    int flag = 0;
    cin >> n;
    cout << "sqrt of " << n << ": " << sqrt(n) << endl;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a Prime Number...";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << n << " is Prime Number...." << endl;
    }

    return 0;
}