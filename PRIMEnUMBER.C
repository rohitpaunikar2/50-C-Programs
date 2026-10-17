#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    // n = number entered by the user
    // i = loop variable
    // flag = used to check whether the number is prime or not
    // flag = 0 means we assume the number is prime

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        flag = 1;
        // 0 and 1 are NOT prime numbers
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            // Check if n is divisible by any number from 2 to n-1

            if (n % i == 0)
            {
                flag = 1;
                // If remainder is 0, n is divisible by i
                // Therefore, n is NOT a prime number

                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("%d is a Prime Number", n);
        // flag is still 0 → no divisor was found
    }
    else
    {
        printf("%d is Not a Prime Number", n);
        // flag is 1 → divisor was found or n <= 1
    }

    return 0;
}