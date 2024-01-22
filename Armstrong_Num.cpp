#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n;

    cout << "Enter Number to check Armstrong Number: " << endl;
    cin >> n;

    int sum = 1;
    int org_n = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    cout << "n= " << n << " original: " << org_n << "Sum: " << sum << endl;
    if (sum == org_n)
    {
        cout << "ArmStrong Number....." << endl;
    }
    else
    {
        cout << "NOT ArmStrong Number....." << endl;
    }
    
}

