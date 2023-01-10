#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout << "Enter elements: ";
    vector<int> v;
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int maxVal = v[0];
    int count = 0;
    for (int i: v) {
        if (i > maxVal) {
            maxVal = i;
            count = 1;
        } else if (maxVal == i) {
            count++;
        }
    }

    cout << "The maximum value is " << maxVal << " and it appears " << count << " times.\n";

    return 0;
}
