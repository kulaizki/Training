#include <iostream>

using namespace std;

int main()
{
    int n, x, sum = 0;
    cout << "Enter number of inputs: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter N" << i << ": ";
        cin >> x;
        if (x > 0)
            sum += x;
    }

    cout << "Sum of all positive numbers is " << sum;

    return 0;
}
