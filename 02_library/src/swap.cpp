#include "swap"

void swap(int& a, int& b)
{
    std::cout << "This is C++" << std::endl;
    int temp = a;
    a = b;
    b = temp;
}