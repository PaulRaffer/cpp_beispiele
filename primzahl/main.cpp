#include <iostream>
#include <cmath>

int main()
{
    int number = 7;
    bool is_prime = true;



    //std::cout << "Gib eine Zahl ein";

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
