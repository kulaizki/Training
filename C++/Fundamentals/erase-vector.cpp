#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {2, 4, 5, 9, 1, 3};

    for (int x : v) { cout << x << ' '; } // displays current array
    cout <<'\n';

    v.erase(v.begin(), v.begin() + 1); // remove first: range 0 - 1 (index 0 gets removed)
    for (int x: v) { cout << x << ' '; }
    cout << '\n';

    v.erase(v.begin() + v.size() - 1, v.end()); // remove last: range 3 - 4 (index 3 gets removed)
    for (int x: v) { cout << x << ' '; } 
}
