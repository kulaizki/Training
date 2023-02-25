#include <bits/stdc++.h>

using namespace std;

int main() {

    int x;
    vector<int> v = {2, 4, 5, 6, 7, 12, 82, 47};

    cout << "Enter x: ";
    cin >> x;

    auto it = find(v.begin(), v.end(), x);

    (it != v.end()) ? cout << it - v.begin() << '\n'
                    : cout << -1 << '\n';
}