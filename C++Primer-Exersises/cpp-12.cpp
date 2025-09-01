//It sums all numbers from -100 to 100. The result is 0

#include <iostream>

int main ()
{
    int sum = 0;

    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
        std::cout << sum << std::endl;

    }

    return 0;
}