#include <iostream>

using namespace std;

int main()
{
    int input, hours, minutes, seconds;

    cout << "Input seconds: ";
    cin >> input;
    
    hours = input/3600;
    minutes = (input - (3600 * hours)) / 60;
    seconds = (input - (3600 * hours) - (60 * minutes));

    if (hours < 10)
        cout << "0";
        cout << hours << ":";
    
    if (minutes < 10) 
        cout << "0";
        cout << minutes << ":";
    
    if (seconds < 10)
        cout << "0";
        cout << seconds << '\n';

    return 0;
}
