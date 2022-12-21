#include <iostream>

using namespace std;

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;

    int digit, mult = 1, n1 = 0;

    while (n > 0)
    {
        digit = n % 10;
        if (digit > 3)
        {
            n1 = digit * mult + n1;
            mult *= 10;
        }
        n /= 10;
    }

    if (mult > 1)
        cout << n1;

    else
        cout << "No digits are greater than 3.";

    return 0;
}
