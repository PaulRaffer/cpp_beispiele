#include <iostream>
#include <cmath>

namespace math {

bool is_prime(int number)
{
    bool prime = true;
    if (number % 2 == 0) {
        prime = false;
    }
    else {
        for (int i = 3; i <= std::sqrt(number); i += 2) {
            if (number % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if (number == 2) {
        prime = true;
    }

    if (number < 2) {
        prime = false;
    }

    return prime;
}

}

int main()
{
    for (int n = -8; n < 100; ++n) {
        if (math::is_prime(n)) {
            std::cout << n << '\n';//" ist eine Primzahl.\n";
        }
        /*else {
            std::cout << n << " ist keine Primzahl.\n";
        }*/
    }
}
