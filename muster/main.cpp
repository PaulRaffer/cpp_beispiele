#include <iostream>

auto muster(
    int groesse = 5, int anz_x = 1, int anz_y = 1,
    char zeichen = '*', char leer = ' ', char newline = '\n')
    -> void;

auto muster(
    int groesse, int anz_x, int anz_y,
    char zeichen, char leer, char newline)
    -> void
{

    for (auto y = 0; y < anz_y; ++y) {

        for (auto zeile = 0; zeile < groesse; ++zeile) {

            for (auto x = 0; x < anz_x; ++x) {

                for (auto l = 0; l < groesse - zeile; ++l)
                    std::cout << leer;

                for (auto z = 0; z < 2 * zeile + 1; ++z)
                    std::cout << zeichen;

                for (auto l = 0; l < groesse - zeile; ++l)
                    std::cout << leer;
            }
            std::cout << "  " << zeile << newline;
        }

        for (auto zeile = groesse; zeile >= 0; --zeile) {

            for (auto x = 0; x < anz_x; ++x) {

                for (auto l = 0; l < groesse - zeile; ++l)
                    std::cout << leer;

                for (auto z = 0; z < 2 * zeile + 1; ++z)
                    std::cout << zeichen;

                for (auto l = 0; l < groesse - zeile; ++l)
                    std::cout << leer;
            }
            std::cout << "  " << zeile << newline;
        }
    }
}

auto main() -> int
{
    muster(5, 10, 6, 'o');
}
