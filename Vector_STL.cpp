#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // traversing the vector
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    v.pop_back();
    v.erase(v.end() - 1);

    v.insert(v.begin() + 1, 100);

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}