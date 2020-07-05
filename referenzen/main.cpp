#include <iostream>

int main()
{
	// Kopie:
	
    int i1 = 5;
    std::cout << i1 << std::endl;

    int i2 = i1; // Wert i1 wird in i2 kopiert
    i2 = 7;

    std::cout << i2 << std::endl << i1; // 7 5



    //Referenzen:

    int j1 = 5;
    std::cout << j1 << std::endl;

    int& j2 = j1; // j2 ist ein anderer Name für j1
    j2 = 7;

    std::cout << j2 << std::endl << j1; // 7 7
}