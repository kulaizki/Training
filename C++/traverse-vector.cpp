#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{1, 2 ,3 ,4 ,5};

    for (auto & i : arr) {
        cout << i << ' ';
    }
    cout << '\n';
    for (int i = 0; i < arr.size(); i++) {
        cout << "index " << i << " = " <<  arr[i] << '\n';
    }
}