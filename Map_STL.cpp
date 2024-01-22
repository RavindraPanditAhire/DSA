#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> map;
    map[0] = "Ravindra";
    map[1] = "Bhausaheb";
    map[2] = "Ganesh";
    map[3] = "Rajendra";

    cout << endl;
    

    cout << map.at(0) << endl;

    return 0;
}