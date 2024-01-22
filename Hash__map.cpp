#include <iostream>
#include <map>
using namespace std;

class Directory
{

    map<string, long long> directory;

public:
    void add(string key, long long value)
    {
        directory.insert(make_pair(key, value));
        directory["Ravi"] = 9322026193;
        directory["Ganesh"] = 9284209164;
        directory["Bhausaheb"] = 8975262856;
        directory["Pravin"] = 8766802357;
        cout << key << " and " << value << " is Added...\n";
    }

    void Display()
    {
        cout << "---------------Map Items------------------\n";
        map<string, long long>::reverse_iterator i;
        for (i = directory.rbegin(); i != directory.rend(); i++)
        {
            cout << i->first << " : " << i->second << " \n";
        }

        cout << "size1: " << directory.size() << endl;
        cout << "size2: " << directory.max_size() << endl;
        // map<string, long long>::iterator it = directory.find("Ravindra");
    }
};
int main()
{
    Directory d;

    d.add("Ravindra", 9322026193);
    d.add("Rajendra", 8975262856);
    d.Display();

    return 0;
}