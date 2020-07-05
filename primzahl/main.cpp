#include <iostream>
#include <cmath>

int main()
{
    int number;
    bool is_prime = true;

    /*i = i + 1
    i += 1
    i++
    ++i
    */

    std::cout << "Gib eine Zahl ein";
    std::cin >> number;

    if (number % 2 == 0)
        is_prime = false;
    else
    {
        for (int i = 3; i <= std::sqrt(number); i += 2)
            if (number % i == 0)
            {
                is_prime = false;
                break;
            }
    }

    if (number == 2)
        is_prime = true;

    if (is_prime)
        std::cout << number << " ist eine Primzahl.\n";
    else
        std::cout << number << " ist keine Primzahl.\n";

}
