#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

struct Node
{
public:
    int data;
    Node *left;
    Node *right;
};

class HeapTree
{
    vector<list<int> > hashTable;
    int buckets;

public:
    HeapTree(int size)
    {
        this->buckets = size;
        this->hashTable.resize(size);
    }
    int hashValue(int key)
    {
        return key % buckets;
    }

    void add(int key)
    {
        int ind = hashValue(key);
        hashTable[ind].push_back(key);
    }

    list<int>::iterator searchKey(int key)
    {
        int ind=hashValue(key);

        return find(hashTable[ind].begin(),hashTable[ind].end(),key);
    }

};
int main()
{
    HeapTree t(10);
    t.add(20);
    
    return 0;
}