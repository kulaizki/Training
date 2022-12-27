#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n, x, min = 0, max = 0;
    cout << "Enter n: ";
    cin >> n;
    
    vector<int> arr;
    cout << "\nEnter elements:\n";
    
    while (n--) {
        cin >> x;
        arr.push_back(x);
    }
    
    arr.clear(2);
    
    min = *min_element(arr.begin(), arr.end());
    max = *max_element(arr.begin(), arr.end());
    
    cout << "Minimum element of vector is " << min << '\n';
    cout << "Maximum element of vector is " << max << '\n';
    
    return 0;
}
