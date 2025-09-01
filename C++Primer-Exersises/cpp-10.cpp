#include <iostream>

int main ()
{
    int val = 10, sum = 1;

    while(val >= 1)
    {
        std::cout << val << std::endl;
        sum = val - sum;
        val--;    
    }
    
    return 0;
}