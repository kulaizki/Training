#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1{ 1, 2, 3, 4, 5 };
    vector<int> vector2{ 6, 7, 8, 9, 10 };

    // Before Swapping vector-1 and vector-2
    cout << "Vector 1" << endl;
    for (auto i : vector1)
        cout << i << " ";

    cout << "\n";

    cout << "Vector 2" << endl;
    for (auto i : vector2)
        cout << i << " ";
    cout << "\n";

    // Swapping vector-1 and vector-2
    vector1.swap(vector2);

    // After swapping vector-1 and vector-2
    cout << "Vector 1" << endl;
    for (auto i : vector1)
        cout << i << " ";

    cout << "\n";

    cout << "Vector 2" << endl;
    for (auto i : vector2)
        cout << i << " ";

    return 0;
}
