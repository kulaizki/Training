#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> bits{ 0b0000'0101 }; // we need 8 bits, start with bit pattern 0000 0101
    bits.set(3); // set bit position 3 to 1 (now we have 0000 1101)
    bits.flip(4); // flip bit 4 (now we have 0001 1101)
    bits.reset(4); // set bit 4 back to 0 (now we have 0000 1101)

    std::cout << "All the bits: " << bits << '\n';
    std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
    std::cout << "Bit 4 has value: " << bits.test(4) << '\n';

    std::bitset<4> x{ 0b0110 };

	std::cout << x << 1 << '\n'; // print value of x (0110), then 1
	std::cout << (x << 1) << '\n'; // print x left shifted by 1 (1100)

    std::cout << ~std::bitset<4>{ 0b0100 } << ' ' << ~std::bitset<8>{ 0b0100 } << '\n';

    std::cout << (std::bitset<4>{ 0b0101 } | std::bitset<4>{ 0b0110 }) << '\n'; // bitwise OR applies to each bit!

    // Logical AND evaluates to true if both the left and right operand evaluate to true
    std::cout << (std::bitset<4>{ 0b0101 } & std::bitset<4>{ 0b0110 }) << '\n'; 

    // Similar to the arithmetic assignment operators, C++ provides bitwise assignment
    // operators in order to facilitate easy modification of variables.
    // Left shift assignment	<<=	x <<= y	Shift x left by y bits
    // Right shift assignment	>>=	x >>= y	Shift x right by y bits
    // Bitwise OR assignment	|=	x |= y	Assign x | y to x
    // Bitwise AND assignment	&=	x &= y	Assign x & y to x
    // Bitwise XOR assignment	^=	x ^= y	Assign x ^ y to x

    std::bitset<4> bits1 { 0b0100 };
    bits1 >>= 1;
    std::cout << bits1 << '\n';


    return 0;
}