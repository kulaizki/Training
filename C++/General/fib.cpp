#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;

    cout << "Fibonacci numbers: ";
    for (int i = 2; i < n; i++) 
        arr[i] = arr[i-2] + arr[i-1];
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}
