// C++ program to demonstrate
// functionality of unordered_map
#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

// Driver code
int main()
{
    // Declaring umap to be of
    // <string, int> type key
    // will be of STRING type
    // and mapped VALUE will
    // be of int type
    unordered_map<int, int> ump;
    map<char, int> mp;

    // inserting values by using [] operator
    ump[5] = 10;
    ump[10] = 20;
    ump[15] = 30;
    mp['a'] = 123;
    mp['b'] = 321;
    mp['c'] = 132;

    // Traversing 
    for (auto x : ump)
        cout << x.second << '\n';

    for (auto x : mp)
        cout << x.first << " " << x.second << '\n';
}