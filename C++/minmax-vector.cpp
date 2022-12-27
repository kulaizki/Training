#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //vector declaration
    vector<int> v1{ 10, 20, 30, 40, 50, 25, 15 };
    int min = 0;
    int max = 0;

    //finding minimum  & maximum element
    min = *min_element(v1.begin(), v1.end());
    max = *max_element(v1.begin(), v1.end());

    cout << "minimum element of the vector: " << min << endl;
    cout << "maximum element of the vector: " << max << endl;

    return 0;
}
