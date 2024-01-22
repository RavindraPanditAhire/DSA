#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string s = "Ravindra Pandit Ahire";
    cout << s.substr(0, 1) << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    cout << s.substr(1, 1) << endl;
    reverse(s.begin(), s.end());
    s.append(" From Engineering college,Talegaon...\n");
    cout << s << endl;
    cout << s.capacity() << endl;

    return 0;
}
