#include <iostream>

struct Bruch
{
    int zaehler{0};
    int nenner{1};
};

int main()
{
    Bruch b;
    b.zaehler = 9;
    std::cout << b.zaehler;
    std::cout << b.nenner;

    Bruch a;
    a.zaehler = 8;
    a.nenner = 5;
    std::cout << a.zaehler;
    std::cout << a.nenner;
}
