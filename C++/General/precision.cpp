#include <iostream>
#include <iomanip> // for output manipulator std::setprecision()

int main()
{
    std::cout << std::setprecision(2) << std::fixed; // show 16 digits of precision    
    std::cout << 33.33333333333333333333333333333333333333f <<'\n'; // f suffix means float
    std::cout << 33.33333333333333333333333333333333333333 << '\n'; // no suffix means double

    std::cout << std::setprecision(16); // show 16 digits of precision
    std::cout << 3.33333333333333333333333333333333333333f <<'\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double

    std::cout << std::setprecision(8);
    std::cout << 3.33333333333333333333333333333333333333f <<'\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double
    
    return 0;
}
