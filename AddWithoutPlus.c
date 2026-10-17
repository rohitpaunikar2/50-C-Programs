#include <stdio.h>
//Using Bitwise Opertors
int main()
{
    int sum = 0, a, b, carry;

    while (b != 0)
    {
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    return 0;
}