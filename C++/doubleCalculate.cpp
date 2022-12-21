#include <iostream>
#include <iomanip>

using namespace std;

double inputValue();
void calculate(double x, double y);

int main()
{
    double num1 { inputValue() };
    double num2 { inputValue() };

    cout << "Enter one of the following: +, -, *, or /: ";
    calculate(num1, num2);

    return 0;
}

double inputValue()
{
    cout << "Enter a double value: ";
    double input;
    cin >> input;

    return input;
}

void calculate(double x, double y)
{
    char inputOperator;
    cin >> inputOperator;

    if (inputOperator == '+')
        cout << x << " + " << y << " is " << x + y << '\n';

    else if (inputOperator == '-')
        cout << x << " - " << y << " is " << x - y << '\n';
        
    else if (inputOperator == '*')
        cout << x << " * " << y << " is " << x * y << '\n';

    else if (inputOperator == '/')
        cout << x << " / " << y << " is " << x / y << '\n';

    else
        cout << "Invalid Input\n";
}