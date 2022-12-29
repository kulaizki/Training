#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> mp;
    for (int x: nums) mp[x]++;
    for (int x: nums) if (mp[x] > 1) return true;
        
    return false;
}

int main()
{
    vector<int> v {1,2,3,4};
    
    containsDuplicate(v) ? cout << "true" : cout << "false";
}