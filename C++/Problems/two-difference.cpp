#include <bits/stdc++.h>

using namespace std;

vector<int> twoDifference(vector<int> nums, int target) {

    unordered_map<int, int> mp;
    int len = nums.size();

    for (int i = 0; i < len; ++i) {
        int x = nums[i] - target;
        if (mp.find(x) != mp.end()) {
            return {mp[x], i};
        }
        mp[nums[i]] = i;
    }

    return {};
}

int main() {

    vector<int> v = {1, 4, 8, 9, 10, 16, 19};
    int target = 10;

    vector<int> result = twoDifference(v, target);
    cout << result[0] << ' ' << result[1] << '\n';
}