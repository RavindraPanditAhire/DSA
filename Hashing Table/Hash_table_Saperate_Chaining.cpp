#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using namespace std;

class Hashing
{
    // vectort of linked list for separate chaininig

    vector<list<int> > hashTable;
    // buchet of hashtable;
    int bucket;

public:
    // constructor to initialized the array and bucket
    Hashing(int size)
    {
        this->bucket = size;
        hashTable.resize(size);
    }

    // getting hash value
    int hashValue(int key)
    {
        return key % bucket; // use Devision mod Hash Function
    }

    // adding new Elements;
    void addKey(int key)
    {
        // first get hashValue of pass key to be added
        int ind = hashValue(key);

        // push key in vector of Linkd list at calcualated hash value index
        hashTable[ind].push_back(key);
        cout << key << " added...." << endl;
    }

    list<int>::iterator search(int key)
    {
        // getting hashValue of pass key to find at index
        int ind = hashValue(key);
        // if key present
        return find(hashTable[ind].begin(), hashTable[ind].end(), key);
    }

    void deleteKey(int key)
    {
        // first get hashValue of the passed key
        int ind = hashValue(key);

        list<int>::iterator it = search(key);

        if (it != hashTable[ind].end())
        {
            hashTable[ind].erase(it);
            cout << key << " Deleted...\n";
        }
        else
        {
            cout << key << " not found...\n";
        }
    }
};
int main()
{
    Hashing h(3);
    h.addKey(10);
    h.addKey(20);
    h.addKey(30);
    h.deleteKey(30);
    h.deleteKey(30);
    return 0;
}
