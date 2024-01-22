#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> record;

    record[2] = "Tejas";
    record[2] = "Tejas";
    record.insert(make_pair(1, "Ravindra"));
    record.insert(make_pair(3, "Raj"));

    for (auto &&i : record)
    {
        cout << i.first << " " << i.second << " \n";
    }

    return 0;
}