#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> nums, int x) {

    int mid, low = 0, high = nums.size()-1;

    while (low <= high)
    {
        mid = low + (high-low) / 2;
        if (x == nums[mid])
            return mid;
        else if (x > nums[mid])
            low = mid + 1;
        else 
            high = mid - 1;
    }

    return -1;
}

int main() {

    int x;
    vector<int> v = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1028, 2048};

    cout << "Enter number to search: ";
    cin >> x;

    cout << binarySearch(v, x);
}