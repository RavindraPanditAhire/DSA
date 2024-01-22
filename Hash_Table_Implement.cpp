#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

class Hashing
{

    // creating hashtale to of linked list to handle Collission

    vector<list<int>> hashTable;
    int buckets;

public:
    Hashing(int cap)
    {
        this->buckets = cap;
        this->hashTable.resize(buckets);
    }

    // for calculating the Hash value by Division method
    int hashValue(int key)
    {
        return key % buckets;
    }

    // adding to hashTable
    void add(int key)
    {
        // fisrt get hashValue of given key
        int ind = hashValue(key);
        hashTable[ind].push_back(key);
        cout << key << " added at : " << ind << endl;
    }

    // seraching the particular index in hashTable
    list<int>::iterator Search(int key)
    {
        int ind = hashValue(key);
        return find(hashTable[ind].begin(), hashTable[ind].end(), key);
    }

    // deleting key of particualar index

    void deleteKey(int key)
    {
        int ind = hashValue(key);

        if (Search(key) != hashTable[ind].end())
        {
            hashTable[ind].erase(Search(key));
            cout << key << " is Deleted...\n";
        }
        else
        {
            cout << key << " Not found in HashTable...\n";
        }
        hashTable[ind].erase(Search(key));
    }
};

int main()
{
    Hashing h(10);
    h.add(123);
    h.add(133);
    h.add(124);
    h.add(125);
    h.add(126);
    h.add(127);
    h.deleteKey(125);
    int toFind = 133;
    list<int>::iterator it = h.Search(toFind);
    if (*it != -1)
    {
        cout << toFind << " is Present...\n";
    }
    else
    {
        cout << toFind << " Not Found....\n";
    }
    

    return 0;
}