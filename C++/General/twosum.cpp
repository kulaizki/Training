#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twosum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value, index
    for (int i = 0; i < nums.size(); i++) {
        int numToFind = target - nums[i];
        if (mp.find(numToFind) != mp.end()) {
            return {mp[numToFind], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> v = {5, 1, 6, 6, 4, 7};
    vector<int> result = twosum(v, 12);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ' ';
    }
}