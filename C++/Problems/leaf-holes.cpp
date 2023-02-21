#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    unordered_map<int, int> leaves;
    for (int i = 0; i < n; ++i)
    {
        int size;
        int holes;
        cin >> size >> holes;
        leaves[size] += holes;
    }

    int minValue = INT_MAX;
    int minKey = -1;
    for (const auto& [key, value]: leaves)
    {
        if (value < minValue)
        {
            minValue = value;
            minKey = key;
        }
    }
    
    cout << minKey << ' ' << minValue << '\n';
}