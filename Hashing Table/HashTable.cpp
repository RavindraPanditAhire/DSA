// #include <iostream>
// using namespace std;

// class HashTable
// {
//     int *arr;
//     int buckets;
//     int capacity;

// public:
//     HashTable(int cap)
//     {
//         this->buckets = cap;
//         this->arr = new int[cap];
//     }

//     int hashValue(int data)
//     {
//         return data % buckets;
//     }

//     void add(int data)
//     {
//         int index = hashValue(data);
//         arr[index] = data;
//     }

//     void display()
//     {
//         for (int i = 1; i < buckets; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {

//     HashTable h(5);

//     h.add(10);
//     h.add(20);
//     h.add(30);
//     h.add(40);
//     h.add(50);

//     h.display();

//     return 0;
// }