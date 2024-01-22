#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int mostFrequent(vector<int> &v, int &n)
{
    
    int maxFreq=0;
     n=11;
    v={1,1,2,1,4,4,3,2,1,1,5};
    // for (size_t i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    unordered_map<int, int> m;
    for (size_t i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
        maxFreq=max(maxFreq,m[v[i]]);
    }

    return maxFreq;

}

int main()
{
    vector<int>v;
    int n;
    cout<<"max: "<<mostFrequent(v,n);

    // declaration
    // map<string, int> m;
    // // 1
    // m.insert(make_pair("Ravi", 20));
    // // 2
    // m["Ganesh"] = 52;

    // map<string, int>::iterator it = m.begin();
    // while (it != m.end())
    // {
    //     cout << it->first << " : " << it->second << " \n";
    //     it++;
    // }

    return 0;
}