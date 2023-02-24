#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> nums, int target) {

    unordered_map<int, int> mp;
    int n = nums.size();

    for (int i = 0; i < n; ++i)
    {
        int num_to_find = target - nums[i];
        if (mp.find(num_to_find) != mp.end())
            return {mp[num_to_find], i};
        
        mp[nums[i]] = i;
    }

    return {};
}

int main() {

    vector<int> v1 = {5, 7, 0, 7, 12, 1};
    vector<int> v2 = twoSum(v1, 14);

    for (int i: v2) cout << i << ' ';
    
}