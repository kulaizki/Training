#include <iostream>

using namespace std;

int main()
{
    int n, num1{ 0 }, num2{ 1 }, sum;

    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci Sequence: ";

    for (int i = 0; i < n; i++)
    {
        cout << num1 << " ";
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    return 0;
}