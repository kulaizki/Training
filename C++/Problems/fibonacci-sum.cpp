#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, n1 = 0, n2 = 1, sum = 0, current_sum;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        sum += n1;
        current_sum = n1 + n2;
        n1 = n2;
        n2 = current_sum;
    }
    
    cout << sum << '\n';
}