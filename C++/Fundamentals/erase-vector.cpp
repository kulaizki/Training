#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {2, 4, 5, 9, 1, 3};

    for (int x : v) { cout << x << ' '; } // displays current array
    cout <<'\n';

    v.erase(v.begin(), v.begin() + 1); // remove first
    for (int x: v) { cout << x << ' '; }
    cout << '\n';

    v.erase(v.begin() + v.size() - 1, v.end()); // remove last
    for (int x: v) { cout << x << ' '; } 
}
