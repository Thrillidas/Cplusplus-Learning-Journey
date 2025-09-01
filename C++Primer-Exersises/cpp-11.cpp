#include <iostream>

int main () 
{
    int integer_1, integer_2;

    std::cout << "Submit integer two integers" << std:: endl;
    std::cin >> integer_1, std::cin >> integer_2;

    while (integer_2 - 1 > integer_1)
    {
        std::cout << ++integer_1 << std::endl;
    }
    //std::cout << "you have submited " << integer_1, std::cout<< " ", std::cout<< integer_2; 

    return 0;

}